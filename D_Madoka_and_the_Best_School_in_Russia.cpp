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

template<typename T>
class Node
{
    public: 
    T elem;
    Node<T>* next;
    friend class SinglyLinkedList;
};

template<typename T>
class SinglyLinkedList
{
    public:
    SinglyLinkedList();
    ~SinglyLinkedList();
    Node<T> head;
    void insertFront(T a);
    void insertEnd(T a);
    void removeFront();
    void removeEnd();
};
template<typename T>
SinglyLinkedList::SinglyLinkedList()
{
    head=NULL;
}
template<typename T>
SinglyLinkedList::~SinglyLinkedList() {
    while(!empty())
    removeFront();
}
template<typename T>
SinglyLinkedList::insertFront(T a)
{
    Node* temp = new Node;
    temp->next=head;
    temp->elem = a;
}




int main()
{
    FASTIO;
    
}