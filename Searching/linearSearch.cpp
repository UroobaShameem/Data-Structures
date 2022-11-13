#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cout<<"Enter the element: ";
        cin>>arr[i];
    }

    cout<<"Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    int key;
    cout<<"Enter the element to be searched: ";
    cin>>key;
    int ans = linearSearch(arr, n, key);
    if(ans == -1){
        cout<<"Element not found";
    }
    else{
        cout<<"Element found at index "<<ans+1;
    }
    
    return 0;
}