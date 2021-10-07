#include<bits/stdc++.h>
using namespace std;

class circularQueue{ 
    int f;
    int r;

    public:
    int size;
    int* arr;
    circularQueue(){
        cout<<"BKL make something out of queue"<<endl;
    }
    circularQueue(int size){
        this->size=size;
        arr=new int[size];
        f=-1;
        r=-1;
    }
    bool isEmpty();
    bool isFull();
    void enqueue(int data);
    int dequeue();
};


bool circularQueue:: isEmpty(){
    if(f==r) return true; 
    else return false;
}

bool circularQueue:: isFull(){
    if(((r+1)%size)==f) return true;
    else return false;
}

void circularQueue:: enqueue(int data){
    if(!isFull()) arr[(++r)%size]=data;
}

int circularQueue:: dequeue(){
    if(!isEmpty()){
        f++;
        return arr[f];
    }
    else return -1;    
}

