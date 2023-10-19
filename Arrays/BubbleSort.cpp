#include<iostream>
using namespace std;
void swap(int *x , int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void bubbleSort(int arr[],int size){
    int i,j;
    for(i=0;i<=size-1;i++){
        for(j=0;j<=size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }

        }
        
    }
}
int main(){
    int n,i,arr[100];
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the elements of array"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The unsorted array is as follows"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }  
    cout<<"The sorted array is as follows"<<endl;
    void bubbleSort(int arr[],int n);
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }  

    return 0;
}
