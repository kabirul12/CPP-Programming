#include <iostream>
using namespace std;

int main() {
    int row,col;
    cout << "Enter the number of rows and cols you want..: "<<endl;
    cin >> row >>col;

    int mat[row][col],trans[col][row];

    //Set the matrix by user
    cout << "Enter Matrix elements: "<<endl;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin >> mat[i][j];
        }
    }
    //Display the matrix
    cout <<"Display the original matrix: " <<endl;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++){
            cout <<mat[i][j] <<" ";
        }
        cout <<endl;
    }
    //compute transpose 
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++) {
            trans[j][i]=mat[i][j];
        }
    }
    //transpose matrix
    cout << "Transpose Matrix : \n";
    for(int i=0; i<col; i++) {
        for(int j=0; j<row; j++) {
            cout <<trans[i][j] <<" ";
        }
        cout <<endl;
    } 
    return 0;
}