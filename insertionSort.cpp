#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void insertionSort(int arr[],int size){
    for(int i=0;i<size;i++){}
}    


int main(){
    int arr[] = {12, 11, 13, 5, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    printArray(arr, n);
 
    return 0;
}