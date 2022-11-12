#include<iostream>
using namespace std;
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

    for(int i=0; i<n-1;i++){        //loop for n-1 times(first element to n-1 element)
        for(int j=i+1; j<n;j++){    //loop for n times(second element to n element)
            if(arr[j]<arr[i]){      //if the element is less than the next element then swap
                int temp= arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    cout<<"The sorted array is: ";    //print the sorted array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}