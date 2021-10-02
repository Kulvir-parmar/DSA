#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

//Traverse
//This is little bit different coz in this last element does not point NULL instead it points to head.
void traverse(node* head){
    node* ptr =head;
    do{
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
    while(ptr!=head);
}


//Insertion at first
void insertFirst(node* head,int data){
    node* ptr =new node;
    ptr->data=data;

    node* p = head->next;
    while(p!=head){
        p=p->next;
    }
    ptr->next=head;
    p->next=ptr;
    head=ptr;
}


//Double LL
class node1{
    public:
    int data;
    node1* next;
    node1* prev;
};

void traverseD(node1* head){
    node1* ptr =head;
    do{
       cout<<ptr->data;
       ptr=ptr->next; 
    }while(ptr->next!=NULL);
}



//Reverse traversing in doubly linked list
void traverseRevD(node1* head){
    node1* ptr=head;
    do{
        ptr=ptr->next;
    }while(ptr->next!=NULL);

    do{
        cout<<ptr->prev;
        ptr=ptr->prev;
    }while(ptr->prev!=NULL);
}


//Insertion in a Doubly linked list at given index
void insertIndex(int n,node1* head,int data){
    node1* ptr= new node1;
    ptr->data=data;
    for(int i=0;i<n-1;i++){
        head=head->next;
    }
    ptr->next=head->next;
    head->next=ptr;
    ptr->prev=head;
}