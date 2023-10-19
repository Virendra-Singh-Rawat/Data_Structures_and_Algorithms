#include <iostream>
using namespace std;
int BinSearch(int arr[],int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){
    int arr[100],n,key;
    cout<<"Enter the size of your array"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element you want to search"<<endl;
    cin>>key;
    int Index = BinSearch(arr,n,key);
    cout<<key<<" is at index "<<Index<<endl;
    return 0;  
}
