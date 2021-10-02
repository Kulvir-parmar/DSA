#include<bits/stdc++.h>
using namespace std;

class stll{
    public:
    int data;
    stll* next;
};


// push operation
void push(stll* top,int newData){
    stll* ptr= new stll;
    ptr->data=newData;
    ptr->next=top; 
    top=ptr;
}


// Checking if it is empty or not
bool isEmpty(stll* top){
    if(top==NULL) return true;
    else return false;
}


// Pop operation
void pop(stll* top){
    stll* temp = top;
    top=top->next;
    temp->next=NULL;
    delete(temp);
}


// Peek Operation
int peek(stll* top){
    if(!isEmpty(top)) return top->data;
    else exit(1);
}

// Getting the bottom element of the stack.
int peekBottom(stll* top){
    while(top->next!=NULL) top=top->next;
    return top->data;
}