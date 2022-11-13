#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int start= 0;
    int end= n;
    if(start<=end){
        int mid= (start+end)/2;
        if(key==arr[mid]){
            return mid;
        }
        else if(key<arr[mid]){
            end= mid-1;
        }
        else{
            start= mid+1;
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
        cout<<"Enter the element in sorted order: ";
        cin>>arr[i];
    }

    cout<<"Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl; 
    
    int key;
    cout<<"Enter the element to be searched: ";
    cin>>key;
    
    int ans= binarySearch(arr, n, key);
    if(ans == -1){
        cout<<"Element not found";
    }
    else{
        cout<<"Element found at index "<<ans+1;
    }
    
    return 0;
}