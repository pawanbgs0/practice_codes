#include <iostream>
using namespace std;

// void disp(int m,int n,int ar[8][])
// {
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout<<ar[i][j]<<" ";
//         }
//         cout<<endl;
        
//     }
    
// }
// int main()
// {
//     cout<<"Enter the row and column "<<endl;
//     int r,c;
//     cin>>r>>c;
//     int arr[r][c];
//     cout<<"Enter the elements of the array "<<endl;
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             cin>>arr[i][j];
//         }
        
//     }
//     cout<<"The original matrix "<<endl;
//     disp(r,c,arr);
//     int tarr[c][r];
//     for (int i = 0; i < c ; i++)
//     {
//         for (int j = 0; j < r; j++)
//         {
//             tarr[i][j] = arr[j][i]; 
//         }
        
//     }
//     cout<<"Transpose of the matrix is "<<endl;
//     disp(c,r,tarr);
    
// }


int main()
{
    int** matrix;

    matrix = (int**)malloc(2 * sizeof(int));

    for (int i = 0; i < 2; i++)
    {
        *(matrix + i) = (int*)malloc(2 * sizeof(int)); 
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Enter the value at " << i << j << " : ";
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}