#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int key=arr[i];
        int j = i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
int main(){
    int arr[100],n,i;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    cout<<"Enter the elements : "<<endl;
    for(i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    cout<<"Printing the unsorted array."<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Printing the sorted array."<<endl;
    insertionSort(arr,n);
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}