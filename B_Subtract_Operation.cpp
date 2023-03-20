#include <iostream>
#include <limits.h>

using namespace std;

typedef int Elem; // list base element type
class NodeList
{ // node base type List
private:
    struct Node
    { // nested struct inside class
        int elem;
        Node *next;
        Node *prev;
    };

public:
    class Iterator
    {                      // nested class
        Node *v;           // pointer to node
        Iterator(Node *x); // create from node
    public:
        // dereference operator that access data stored
        int &operator*();
        // comparison operator to check if two iterators pointing/not pointing to same object (not just value)
        bool operator==(const Iterator &p) const;

        bool operator!=(const Iterator &x) const; // to same object (not just value)
        Iterator &operator++();                   // move to next position and return referance to it
        Iterator operator++(int);
        Iterator &operator--(); // move to previous position and return referance to it
        // only Node list can access private memers and create new operator
        friend class NodeList;
    };

private:
    Node *header;  // head of the list
    Node *trailer; // tail of the list

    int n; // node counter

public:
    NodeList(); // constructor
    NodeList(NodeList &L);
    ~NodeList(); // destructor
    int size() const;
    bool empty() const;
    Iterator begin() const; // beggining position
    Iterator end() const;   // position after last node
    void operator=(NodeList &L);
    void insertFront(int value);               // invoke insert(begin(), value)
    void insertBack(int value);                // invoke insert(end(), value)
    void insert(const Iterator &p, int value); // insert Element before position p
    void eraseFront();                         // invoke erase(begin())
    // invoke erase(--end()), have to decrement to position backwards one node
    void eraseBack();
    void erase(const Iterator &p); // remove element at position p
    int getFront();
    int getBack();
    void swap(Iterator &p, Iterator &q);
    void bubbleSort();
};
int NodeList::getFront()
{
    if (empty())
        return INT_MIN;
    return header->next->elem;
}
int NodeList::getBack()
{
    if (empty())
        return INT_MIN;
    return trailer->prev->elem;
}

NodeList::NodeList()
{                      // constructor
    n = 0;             // initially empty
    header = new Node; // create sentinels
    trailer = new Node;
    header->next = trailer; // have them point to each other
    trailer->prev = header;
}

NodeList::~NodeList()
{
    while (!empty())
    {
        eraseFront();
    }
    delete header;
    delete trailer;
}

int NodeList::size() const // list size

{
    return n;
}

bool NodeList::empty() const // is the list empty?
{
    return (n == 0);
}

NodeList::Iterator NodeList::begin() const // begin position is first item
{
    return Iterator(header->next);
}

NodeList::Iterator NodeList::end() const // end position is just beyond last
{
    return Iterator(trailer);
}

NodeList::Iterator::Iterator(Node *u) // constructor from Node*
{
    v = u;
}

Elem &NodeList::Iterator::operator*() // reference to the element
{
    return v->elem;
}

bool NodeList::Iterator::operator==(const Iterator &p) const // compare positions
{
    return v == p.v;
}

bool NodeList::Iterator::operator!=(const Iterator &p) const
{
    return v != p.v;
}

NodeList::Iterator &NodeList::Iterator::operator++() // move to next position
{
    v = v->next;
    return *this;
}

NodeList::Iterator &NodeList::Iterator::operator--() // move to previous position
{
    v = v->prev;
    return *this;
}

void NodeList::insert(const Iterator &p, int value)
{                                       // insert element before p
    Node *position = p.v;               // pointer to p's node
    Node *predecessor = position->prev; // u is a pointer to p's previous node
    Node *newNode = new Node;           // new node to insert
    newNode->elem = value;
    // newNode's next is pointing to position, and position's previous to newNode
    newNode->next = position;
    position->prev = newNode;
    // newNode's previous is pointing to previous, and previous next to newNode
    newNode->prev = predecessor;
    predecessor->next = newNode;
    n++; // increment n by 1
}

void NodeList::insertFront(int value)
{
    return insert(begin(), value);
}

void NodeList::insertBack(int value)
{
    return insert(end(), value);
}

// void NodeList::swap(Iterator &p, Iterator &q)
// {

// }

void NodeList::bubbleSort()
{
    Iterator p = begin();
    for(int i=0;i<n-1;i++)
    {
        Iterator cur = begin(), nxt = ++begin();
        for(int j=0;j<n-i-1;j++)
        {
            if(*cur>*nxt) swap(cur,nxt);    
            ++cur;
            ++nxt;   
        }
    }
    for(;p!=end();++p) cout<<*p<<" ";
}


int main()
{
    NodeList l;
    for(int i=9;i>=0;i--) l.insertBack(i);
    l.bubbleSort();
}