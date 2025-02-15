#include <iostream>
 using namespace std;

 int fact(int n){
    int sum=1;

    for(int i=1; i<n; i++){
        sum*=i;
    }

    return sum;

 }
 void print() {
   cout << "result :" <<fact(5) <<endl;
 }

 int main() {
print();
 }