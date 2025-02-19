#include <iostream>
using namespace std;

int main() {
    int row,col;
    cout << "Enter the number of rows and cols you want: ";
    cin >>row >>col;

    int matrix[row][col],trans_matrix[col][row];

    //Set Matrix value
    cout <<"Enter the matrix elements: "<<endl;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++){
            cin >>matrix[i][j];
        }
    }
    //Display Matrix
    cout << "Show original Matrix:"<<endl;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << matrix[i][j] <<" ";
        }
        cout <<endl;
    }
    //Compute transpose Matrix
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            trans_matrix[j][i]=matrix[i][j];
        }
    }
    //Transpose Matrix
    cout <<"Transpose Matrix: "<<endl;
    for(int i=0; i<col; i++) {
        for(int j=0; j<row; j++){
            cout << trans_matrix[i][j] << " ";
        }
        cout <<endl;
    }
    return 0;
}

/*
Enter the number of rows and cols you want: 3 3
Enter the matrix elements: 
1 2 3
4 5 6
7 8 9
Show original Matrix:
1 2 3 
4 5 6 
7 8 9 
Transpose Matrix: 
1 4 7 
2 5 8
3 6 9
*/