// Selection sort in C++
#include <bits/stdc++.h>
using namespace std;
// function to swap the the position of two elements
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

//function for selection sort process
void SelSort(int arr[],int n){
    int i, j, min_idx,temp;
    for (i=0;i<n-1;i++){
        min_idx=i;
        for(j=i+1;j<n;j++){
            // To sort in descending order, change > to < in this line.
            if(arr[j]<arr[min_idx]){   
                min_idx=j;
            }
        }
        if(arr[min_idx]!=i){
            swap(&arr[i],&arr[min_idx]);
        }
    }
}

//function to print an array
void printArray(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n,i,arr[20];
    cout<<"Enter the size of element : "<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter the element : ";
        cin>>arr[i];
    }
    cout<<"The unsorted array is as follows : "<<endl;
    printArray(arr,n);
    SelSort(arr,n);
    cout<<"The sorted array is as follows : "<<endl;
    printArray(arr,n);
    return 0;
}