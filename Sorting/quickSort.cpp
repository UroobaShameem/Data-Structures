#include<iostream>
using namespace std;

int partition(int arr[], int left, int right){
    int pivot = arr[right];    //pivot is the last element
    int i= left-1;     //i is the index of the smaller element

    for(int j=left; j<right; j++){      
        if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);   //swap the smaller element with the larger element
        }
    }
    swap(arr[i+1], arr[right]);     //swap the pivot with the element at i+1
    return i+1;     //return the index of the pivot
}

void quickSort(int arr[], int left, int right){
    if(left<right){
        int pivot=partition(arr, left, right);     //find the pivot
        quickSort(arr, left, pivot-1);      //sort the left array
        quickSort(arr, pivot+1, right);     //sort the right array
    }
}

int main(){
    int n;
    cout <<"Enter the number of elements: ";    //input the number of elements
    cin >> n;
    int arr[n];
    
    for(int i=0;i<n;i++){       //input the elements
        cout <<"Enter element: ";
        cin >> arr[i];
    }
    cout<<"The array is: ";     //print the array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    quickSort(arr, 0, n-1);     //sort the array

    cout<<"The sorted array is: ";      //print the sorted array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}