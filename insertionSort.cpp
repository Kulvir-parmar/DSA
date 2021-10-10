#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int size){
    for(int i=1;i<size;i++){
        int j=i-1;
        while(j>=0 && arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            j--;
        }
    }
}    
