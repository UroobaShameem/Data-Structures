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

    for(int i=1; i<n;i++){  //loop from secont element to n element
        int temp=arr[i];    //store second element in temp
        int j=i-1;          //j is the index of the previous element
        while(j>=0 && arr[j]>temp){    //while previous element is greater than recent element
            arr[j+1]=arr[j];    //shift the element to the right
            j--;            //decrement j   
        }
        arr[j+1]=temp;      //insert the element in the correct position
    }

    cout<<"The sorted array is: ";    //print the sorted array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}