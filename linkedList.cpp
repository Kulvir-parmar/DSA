#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
};


//traverse the linked list
void traverse(node* head){
    node* ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
    }
}


void insertAtFront(node* head,int data){
    node* temp= new node;
    temp->data=data;
    temp->next=head;
    head = temp;  
}


void insertAtIndex(node* prevNode,int data){
    node* temp= new node;
    temp->data=data;
    temp->next=prevNode->next;
    prevNode->next = temp;  
}

void insertAtLast(node* head,int data){
    node* temp= new node;
    temp->data=data;
    temp->next=NULL;

    //if node is empty
    if(head==NULL){
        head = temp;
        return;
    }

    node* last = head;
    while(last->next!=NULL) last=last->next;

    last->next=temp;
}

//Delete the head node
void delete_head(node* head){
    node* ptr = head;
    head=head->next;
    free(ptr);
}

//delete node at particular index 'n'
void deleteAtIndex(node* head,int n){
    node* p=head;
    node* q=head->next;

    for(int i=0;i<n-1;i++){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
}


//Delete the last node
void deleteLast(node* head){
    node* p=head;
    node* q=head->next;

    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
}

//Deleting a node with specific data value
void deleteDataNode(node* head,int data){
    node* p = head;
    node* q = head->next;

    while(q->data!=data && q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
}


int main(){

    node* head = new node;
    node* second = new node;
    node* third = new node;
}