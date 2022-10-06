#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter number of values: "; //taking size of array
    cin>>x;
    int *ptr= (int*)malloc(x*sizeof(int)); //dynamic allocation of memory using malloc. {multiplying size by size of int in moemory}

    int i; //loop variable
    cout<<"Enter values: "<<endl; //taking values
    for(i=0; i<x; i++)
    {
        cin>> ptr[i]; //values storing at memory index
    }

    cout<<"Values are: "<<endl; //printing values
    for(i=0; i<x; i++)
    {
        cout<<ptr[i]<<" ";
    }
    delete ptr; //deallocating memory
    return 0;
}