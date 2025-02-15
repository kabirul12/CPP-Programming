#include <iostream>
using namespace std;

int main()
{
    int arr1[100][100];
    int arr2[100][100];
    int res[50][50];

    // initialization Matrix
    cout << "Enter array1 elements: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr1[i][j];
        }
    }
        cout << "Display 1 Matrix: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Enter array2 elements: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr2[i][j];
        }
    }

    cout << "Display 2 Matrix: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"Resultant Matrix: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) {
            res[i][j]=arr1[i][j]+arr2[i][j];

            cout<< res[i][j] <<" ";
        }
        cout <<endl;
    }

    cout << endl;
    return 0;
}