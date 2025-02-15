#include <iostream>
using namespace std;

int main() {
    int mat1[10][10],mat2[10][10],result[50][50],trans[100][100],row1,col1,row2,col2;

    cout << "Enter rows and col for first Matrix: ";
    cin >> row1 >>col1;

    cout << "Enter rows and col for second Matrix: ";
    cin >> row2 >>col2;

    if(col1 != row2) {
        cout <<"Multiplication of Matrix is not allowed...";
    }
    //Enter matrix1
    cout <<"Enter first Matrix: \n";
    for(int i=0; i<row1; i++) {
        for(int j=0; j<col1; j++) {
            cin >> mat1[i][j];
        }
    }
    //Display matrix1
    cout <<"Display first matrix: \n";

    for(int i=0; i<row1; i++) {
        for(int j=0; j<col1; j++){
            cout <<mat1[i][j] <<" ";
        }
        cout <<endl;
    }
    //Enter second matrix
    cout <<"Enter Second Matrix: \n";
    for(int i=0; i<row2; i++) {
        for(int j=0; j<col2; j++) {
            cin >> mat2[i][j];
        }
    }
    //Display matrix
    cout <<"Display Second matrix: \n";

    for(int i=0; i<row2; i++) {
        for(int j=0; j<col2; j++){
            cout <<mat2[i][j] <<" ";
        }
        cout <<endl;
    }
    //perform of multiplication matrix
    for(int i=0; i<row1; i++){
        for(int j=0; j<col2; j++) {
            result[i][j]=0;
            for(int k=0; k<col1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    //Result of the matrix
    cout<< "Resultant Matrix: "<<endl;

    for(int i=0; i<row1; i++){
        for(int j=0; j<col2; j++){
            cout<<result[i][j] <<" ";
        }
        cout<< endl;
    }
    //transpose
    cout <<"Transpose matrix: "<<endl;
    for(int i=0; i<row1;i++){
        for(int j=0;j<col2; j++){
            trans[i][j]=result[j][i];
            cout <<trans[i][j] << " ";
        }
        cout <<endl;
    }

    return 0;
}