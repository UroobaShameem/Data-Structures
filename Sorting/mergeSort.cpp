#include<iostream>
using namespace std;

void merge(int arr[], int left, int right, int mid){    //function to merge the array
    int i, j, k;        //indexes: i for left array, j for right array, k for merged array
    i= left;         
    j= mid+1;        //j is the index of the right array
    k= left;       
    int temp[100];    //temporary array to store the merged array
    while(i<=mid && j<=right){      //while both the arrays are not empty
        if(arr[i]<arr[j]){          //if left less than right
            temp[k]=arr[i];         //value of left go in array
            i++;
            k++;
        }
        else{
            temp[k]=arr[j];     //value of right go in array
            j++;
            k++;
        }
    }
    while(i<=mid){      //if left array is not empty
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=right){        //if right array is not empty
        temp[k]=arr[j];
        j++;
        k++;
    }
    for(int i=left; i<=right; i++){     //copy the merged array to the original array
        arr[i]=temp[i];
    }
}

void mergeSort(int a[], int low, int high){   //function to sort the array
    if (low < high){            //if the array has more than one element
        int mid;
        mid = (low + high) / 2;     //find the middle index
        mergeSort(a, low, mid);     //sort the left array
        mergeSort(a, mid + 1, high);    //sort the right array
        merge(a, low, high, mid);       //merge the two arrays

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

    mergeSort(arr, 0, n-1);

    cout<<"The sorted array is: ";    //print the sorted array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}