#include <iostream>
using namespace std;

int main() {
    int row1,col1,row2,col2;
    int mat1[10][10],mat2[10][10],resMat[10][10];

    cout << "Enter the number of rows and cols for First Matrix: ";
    cin >> row1 >>col1;

    cout << "Enter the number of rows and cols for Second Matrix: ";
    cin >> row2 >>col2;

    if(row2!=col1) {
        cout << "Matrix Multiplication is not Allowed!!...";
    }
    //Set First Matrix
    cout << "Enter the elements of First Matrix: "<<endl;
    for(int i=0; i<row1; i++) {
        for(int j=0; j<col1; j++) {
            cin >> mat1[i][j];
        }
    }
    //Set First Matrix
    cout << "Enter the elements of Second Matrix: "<<endl;
    for(int i=0; i<row2; i++) {
        for(int j=0; j<col2; j++) {
            cin >> mat2[i][j];
        }
    }
    //performed the matrix
    for(int i=0; i<row1; i++) {
        for(int j=0; j<col2; j++) {
            resMat[i][j]=0;
            for(int k=0; k<col1; k++) {
                resMat[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    //Result of the multiplication
    cout << "Resultant Matrix: "<<endl;
    for(int i=0; i<row1; i++) {
        for(int j=0; j<col2; j++) {
            cout << resMat[i][j] <<"\t";
        }
        cout <<endl;
    }
    return 0;
}
/*
Enter the number of rows and cols for First Matrix: 2 2
Enter the number of rows and cols for Second Matrix: 2 2
Enter the elements of First Matrix: 
1 2
3 4
Enter the elements of Second Matrix: 
1 2
3 4
Resultant Matrix: 
7       10
15      22
*/