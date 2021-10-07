#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int size;
    int f;
    int r;
    int* arr;
}; 

bool isEmpty(Queue* q){
    if(q->f==q->r) return true; 
    else return false;
}

bool isFull(Queue* q){
    if(q->r==q->size-1) return true;
    else return false;
}

void enqueue(Queue* q,int data){
    if(!isFull(q)) q->arr[++q->r]=data;
    cout<<q->arr[q->r]<<endl;
}

int dequeue(Queue* q){
    if(!isEmpty(q)){
        q->f++;
        return (q->arr[q->f]);
    }
    else return -1;    
}

