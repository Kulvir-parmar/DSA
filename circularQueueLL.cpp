#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int num){
        data=num;
    }
};

class Queue{
    public:       
    node* f,*b;
    Queue(){
        f=b=NULL;
    }
    void enqueue(int num);
    int deQueue();
    bool isEmpty();
};

bool Queue::isEmpty(){
    if(b==NULL) return true;
    return false;
}


void Queue:: enqueue(int num){
    node *temp =new node(num);
    if(b==NULL){
        f=b=temp;
        return;
    }
    b->next=temp;
    b=temp;
    b->next=f;
}

int Queue::deQueue (){
    if(f==NULL) return -1;

    node* temp=f;
    int val=temp->data;
    f=f->next;

    if(f==NULL){
        b=NULL;     // If only one element is present in the Linked List after dequeue no element will be left so we have to make b=NULL too;
        return -1;
    }          
    b->next=f;
    free(temp);
    return val;
}


int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout << "Queue Front : " <<q.f->data<< endl;
    cout<<q.deQueue()<<endl;
    cout << "Queue Front : " <<q.f->data<< endl;
    cout << "Queue Rear : "<<q.b->data<<endl;
}