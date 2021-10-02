#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int size;
    int top;
    int* arr;
};

bool isEmpty(Stack* s){
    if(s->top==-1) return true;
    else return false;
}

bool isFull(Stack* s){
    if(s->top==s->size-1) return true;
    else return false;
}

bool push(Stack* s,int data){
    if(!isFull(s)){
        s->arr[++s->top]=data;
        return true;
    }
    else return false;
}

int pop(Stack* s){
    if(!isEmpty(s)){
        int value = s->top;
        s->top--;
        return value;
    }
    else return 0;
}

int peek(Stack* s){
    if(s->top<0) return -1;
    else return s->arr[s->top];
}

//Accessing an element of a particular index from the top
int peekI(Stack* s,int n){
    if((s->top - n+1)<0) return -1;
    else return s->arr[s->top-n+1];
}