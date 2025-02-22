#include <iostream>
using namespace std;

int main () {
    int array[]={10,15,10,20,10,25,10,15,24,7};
    int size=sizeof(array)/sizeof(array[0]);
    int num;
    bool found=false;

    cout <<"Enter the value to search: ";
    cin >>num;

    cout <<"The value is found at positions: ";
    for(int i=0;i<size;i++) {
        if(num==array[i]) {
            cout << (i+1) <<" ";
            found=true;
        }
    }
    if (found) {
        cout << endl;
    } else {
        cout << "Not found!." << endl;
    }

    cout <<endl;
    return 0;
}
/*
Enter the value to search: 10
The value is found at positions: 1 3 5 7
*/