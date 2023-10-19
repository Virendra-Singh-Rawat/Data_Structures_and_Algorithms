#include <iostream>
using namespace std;
void reverse(int arr[], int n){
    int start = 0 ;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5]={7,8,1,-5,2};
    int arrr[8]={4,5,9,7,22,5,7,14};
    reverse(arr,5);
    reverse(arrr,8);
    printArray(arr,5);
    printArray(arrr,8);
    return 0;
}