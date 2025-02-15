#include<iostream>
using namespace std;

int count=2;

void fibonacci(int first,int second){
    if(count<=10){
        int newFibo=first+second;
        cout << " " <<newFibo;

        first=second;
        second=newFibo;
        count =count+1;
        fibonacci(first,second);
    }else {
        return;
    }
}

int main(){
    int first=0;
    int second=1;
    cout<<first << " " <<second;
    fibonacci(1,0);

    return 0;

}