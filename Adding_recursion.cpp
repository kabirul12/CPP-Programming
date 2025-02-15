#include<iostream>
using namespace std;

int Func(int n){
    if(n<=1){
        return n;
    }else {
        return Func(n-1)+Func(n-2);
    }
}

int main(){
    int res=Func(19);
    cout <<res;
}