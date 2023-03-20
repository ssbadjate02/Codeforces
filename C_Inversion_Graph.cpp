#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define all(x) (x).begin(),(x).end()
#define ss second
#define ff first
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

template <typename DT>
class SinglyLinkedNode
{
public:
    // data items in the node
    DT dataItem;
    SinglyLinkedNode<DT> *next;

    // constructor 
    SinglyLinkedNode(DT nodeValue, SinglyLinkedNode<DT> *nextPointer);
};

template <typename DT>
SinglyLinkedNode<DT>::SinglyLinkedNode(DT nodeValue, SinglyLinkedNode *nextPointer)
{
    dataItem = nodeValue;
    next = nextPointer;
}

template <typename DT>
class SinglyLinkedList
{
    // We declare these members protected because we will inherit this class later
private:
    // Data Members
    SinglyLinkedNode<DT> *head;
    int numberOfItems;

    // These are utility functions that the main functions will call
    void insertEndRecursive(const DT &newDataItem, SinglyLinkedNode<DT> *current);
    void deleteEndRecursive(SinglyLinkedNode<DT> *current);
    void printForwardRecursive(SinglyLinkedNode<DT> *current);
    void printBackwardRecursive(SinglyLinkedNode<DT> *current);

public:
    // Constructor
    SinglyLinkedList();

    void insertEnd(const DT &newDataItem);
    void deleteEnd();
    void printForward();
    void printBackward();
    void reverseK(SinglyLinkedNode<DT> *current,int c,int t);
};

template <typename DT>
SinglyLinkedList<DT>::SinglyLinkedList()
{
    head = NULL;
    numberOfItems = 0;
}

template <typename DT>
void SinglyLinkedList<DT>::insertEnd(const DT &newDataItem)
{
    insertEndRecursive(newDataItem, head);
}

template <typename DT>
void SinglyLinkedList<DT>::insertEndRecursive(const DT &newDataItem, SinglyLinkedNode<DT> *current)
{
    if (numberOfItems == 0)
    {
        head = new SinglyLinkedNode<DT>(newDataItem, NULL);
    }

    else if (current->next == NULL)
    {
        current->next = new SinglyLinkedNode<DT>(newDataItem, NULL);
    }
    else
    {
        insertEndRecursive(newDataItem, current->next);
    }

    numberOfItems++;
}

template <typename DT>
void SinglyLinkedList<DT>::deleteEnd()
{
    deleteEndRecursive(head);
}

template <typename DT>
void SinglyLinkedList<DT>::deleteEndRecursive(SinglyLinkedNode<DT> *current)
{
    if (numberOfItems == 1)
    {
        delete head;
        head = NULL;
    }

    else if (current->next->next == NULL)
    {
        delete current->next;
        current->next = NULL;
    }

    else
    {
        deleteEndRecursive(current->next);
    }

    numberOfItems--;
}

template <typename DT>
void SinglyLinkedList<DT>::printForward()
{
    printForwardRecursive(head);
}

template <typename DT>
void SinglyLinkedList<DT>::printForwardRecursive(SinglyLinkedNode<DT> *current)
{
    if (current == NULL)
        return;

    std::cout << current->dataItem << " ";
    printForwardRecursive(current->next);
    if (current == head)
        std::cout << std::endl;
}

template <typename DT>
void SinglyLinkedList<DT>::printBackward()
{
    printBackwardRecursive(head);
}

// Notice how we don't have to reverse the linked list or maintain any extra variables
// in order to print it backwards. We can just make use of the recursion stack.
template <typename DT>
void SinglyLinkedList<DT>::printBackwardRecursive(SinglyLinkedNode<DT> *current)
{
    if (current == NULL)
        return;

    printBackwardRecursive(current->next);
    std::cout << current->dataItem << " ";
    if (current == head)
        std::cout << std::endl;
}


template <typename DT>
void SinglyLinkedList<DT>::reverseK(SinglyLinkedNode<DT> *current,int c,int t)
{
     while (current != NULL && count < k && t+k<=n) {
        next = current->next;
        current = next;
        count++;
    }

    if (next != NULL)
        head->next = reverse(next, k);

    return prev;
}


int main()
{
    int n,k;
    cin>>n>>k;
    SinglyLinkedList<int> list;
    for(int i=0;i<n;i++) 
    {
        int a;
        cin>>a;
        list.insertEnd(a);    
    }
    list.printForward();
}