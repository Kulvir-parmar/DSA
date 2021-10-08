#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int num){
        data=num;
        next=NULL;
    }
};

class Queue{
    public:       
    node* f,*b;
    Queue(){
        f=b=NULL;
    }
    void enqueue(int num);
    void deQueue();
    bool isEmpty();
};

bool Queue::isEmpty(){
    if(f==b) return true;
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
}
void Queue::deQueue (){
    if(f==NULL) return;

    node* temp=f;
    f=f->next;

    if(f==NULL) b =NULL; // If only one element is present in the Linked List after dequeue no element will be left so we have to make b=NULL too;
    free(temp);
}


int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.deQueue();
    q.deQueue();
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.deQueue();
    cout<<"Is empty: "<<q.isEmpty()<<endl;
    cout << "Queue Front : " <<q.f->data<< endl;
    cout << "Queue Rear : "<<q.b->data<<endl;
}