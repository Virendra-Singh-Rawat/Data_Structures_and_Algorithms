#include <iostream>
using namespace std;

bool LinearSearch(int arr[], int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n,arr[100],key;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number you want to searh: "<<endl;
    cin>>key;
    bool found = LinearSearch(arr,n,key);
    if (found){
        cout<<key<<"is present in the array."<<endl;
    }
    else{
        cout<<key<<"is not present in the array."<<endl;
    }
    return 0;
}