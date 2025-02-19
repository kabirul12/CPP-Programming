#include <iostream>
using namespace std;

int main () {
    int row,col;
    cout << "Enter the number of rows and cols you want: ";
    cin >>row >>col;

    int mat1[row][col],mat2[row][col];
    int res[row][col];

    //Set Matrix 1 value
    cout <<"Enter the element of Matrix1: "<<endl;
    for(int i=0;i<row; i++) {
        for(int j=0; j<col; j++) {
            cout <<"Index: [" <<i <<"]" <<"[" <<j <<"]- ";
            cin >>mat1[i][j];
        }
        cout <<endl;
    }
    //Set the matrix 2 value
    cout <<"Enter the element of Matrix2: "<<endl;
    for(int i=0;i<row; i++) {
        for(int j=0; j<col; j++) {
            cout <<"Index: [" <<i <<"]" <<"[" <<j <<"]- ";
            cin >>mat2[i][j];
        }
        cout <<endl;
    }
    //Resultant Matrix
    cout << "Resultant Matrix is: \n";
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            res[i][j]=mat1[i][j]+mat2[i][j];
            cout << res[i][j] << " ";
        }
        cout <<endl;
    }
    return 0;
}