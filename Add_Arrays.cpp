#include<iostream>

using namespace std;

int main()
{
    int arr1[10];
    int arr2[10];
    int res[50];

    cout<<"Enter Array1: "<<endl;
    for(int i=0;i<5;i++) {
        cin >>arr1[i]; 
    }

    cout<<"Enter Array2: "<<endl;
    for(int i=0;i<5;i++) {
        cin >>arr2[i]; 
    }


    cout <<"Addition of Array: "<<endl;

    for(int i=0; i<5; i++) {
        res[i]=arr1[i]+arr2[i];
        cout << res[i] <<" ";
    }
    cout << endl;
    return 0;
}