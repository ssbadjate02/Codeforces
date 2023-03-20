#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};



struct Node* reverseList(struct Node *head)
{
    struct Node *le=head,*pe=NULL,*temp=head;
    if(head == NULL) return NULL;
    while(temp!=NULL)
    {
        temp=le->next;
        le->next=pe;
        pe=le;
        head = pe;
        le=temp;
    }
    return head;
}
    



void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
       printf("%d ", temp->data);
       temp  = temp->next;
    }
}

/* Driver program to test above function*/
int main()
{
    int n,fi;
    cin>>n>>fi;
    Node *head = new Node(fi);
    Node *tail = head,*p;
    for(int i=1;i<n;i++)
    {
        int k;
        cin>>k;
        tail->next = new Node(k);
        tail = tail->next;
    }
    head = reverseList(head);
    p=head;
    int carry = 1;
    // cout<<head->data;
    while(p != NULL)
    {
        int x = p->data+carry;
        p->data = x%10;
        carry = x/10;
        p=p->next;
    }
    p = head;
    while(p->next)
    p = p->next;
    // // cout<<1;
    if(carry)
    {
        p->next = new Node(carry);
        // head = p->next;
    }
    head = reverseList(head);
    printList(head);
    // cout<<head;
}
