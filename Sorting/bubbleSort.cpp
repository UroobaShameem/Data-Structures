#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the number of elements: "; //input the number of elements
    cin >> n;
    int arr[n];
    
    for(int i=0;i<n;i++){                  //input the elements
        cout <<"Enter element: ";
        cin >> arr[i];
    }
    cout<<"The array is: ";     //print the array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int count=1;            //number of iterations (loop run for n-1 times)

    while(count<n){         //while iteration is less than n
        for(int i=0; i<n-count; i++){   //loop for n-count times
            if(arr[i]>arr[i+1]){    //if the element is greater than the next element then swap
                int temp= arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        count++;
    }

    cout<<"The sorted array is: ";      //print the sorted array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}