#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<< "Enter any number for making multiple table: ";

    cin>>num;

    for(int i=1; i<=num; i++)
    {
        for(int j=1; j<=num; j++){
            cout<< i <<"x" <<j <<"=" <<i*j <<" ";
        }
        cout<<endl;
    }
    return 0;
}