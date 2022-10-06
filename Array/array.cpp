#include<iostream>
using namespace std;
int main()
{
    int x[3]= {26, 27, 28};
    cout<<x[0]<<endl;
    cout<<x[1]<<endl;
    cout<<x[2]<<endl;

    //printing values by for loop
    cout<<"for loop"<<endl;
    for (int i=0; i<3; i++)
    {
        cout<<"value at "<<i<<"-->"<<x[i]<<endl;
    }

    //printing values by while loop
    cout<<"while loop"<<endl;
    int i=0;
    while(i<3)
    {
        cout<<"value at "<<i<<"-->"<<x[i]<<endl;
        i++;
    }

    //accesing by pointer variable
    int* p= x;
    cout<<"pointer variable"<<endl;
    cout<<"value is "<<*p<<endl;
    cout<<"value is "<<*(p+1)<<endl;
    cout<<"value is "<<*(p+2)<<endl;
    return 0;
}