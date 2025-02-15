#include <iostream>
using namespace std;

const int MAX=100;

void multiplication(int mat1[][MAX],int mat2[][MAX],int result[][MAX],int r1,int c1,int r2, int c2){
    if(c1 !=r2){
        cout<< "Matrix multiplication not allowed.." <<endl;
        return;
    }
    //Initialize result matrix
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            result[i][j]=0;
        }
    }
    //perform matrix multiplication
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            for(int k=0; k<c1; k++){
                result+=mat1[i][k]*mat2[k][j];
            }
        }
    }
}
//Display for the result

void printMatrix(int resMat[][MAX], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<resMate[i][j] << " ";
        }
        cout<< endl;
    }
}

//Main Function for execution the code

int main()
{
    int mat1[MAX][MAX], mat2[MAX][MAX],result[MAX][MAX];
    int r1,c1,r2,c2;

    cout<< "Enter rows and columns for first Matrix: ";
    cin>> r1 >>c1;

    cout<< "Enter rows and columns for second Matrix: ";
    cin>> r2 >>c2;

    if(c1!=r2){
        cout<<"Matrix multiplication is not allowed" <<endl;
        return 0;
    }
    cout<< "Enter elements of first matrix: ";
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cin >>mat1[i][j];
        }
    }
    cout<< "Enter elements of second matrix: ";
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            cin >>mat1[i][j];
        }
    }
    multiplication(mat1,mat2,result,r1,c1,r2,c2);
    cout<<"Resultant Matrix: "<<endl;
    printMatrix(result,r1,c1);

    return 0;

}

