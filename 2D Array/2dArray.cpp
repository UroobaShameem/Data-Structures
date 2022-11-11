#include <iostream>
using namespace std;
int main()
{
    int m,n; // m = rows, n = columns
    cout<<"Enter no of rows: ";
    cin>>m;
    cout<<"Enter no of columns: ";
    cin>>n;
    int a[m][n]; // 2D array declaration

    cout <<"Enter elements: ";
    for (int i = 0; i < m; i++) //loop for rows
    {
        for (int j = 0; j < n; j++) //loop for columns
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++) //loop for printing
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}