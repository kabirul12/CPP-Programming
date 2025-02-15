#include <iostream>
using namespace std;

int main()
{

    int arr[] = {10, 5, 4, 47, 56, 9, 74, 84, 64, 78, 32, 23, 1, 54, 88, 96, 73};

    int minValue=arr[0];

    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<=size; i++){
        if(minValue>arr[i]) {
            minValue=arr[i];
        }
    }

    cout<< "Minimum: "<< minValue;


    return 0;
}