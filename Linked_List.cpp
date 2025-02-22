#include <iostream> 
using namespace std;

int main() {
    struct node {
        int data;
        node *next;
    };
    int item;
    node *nptr, *tptr, *list;
    list=NULL;
    //set data for link list
    cout << "Insert items: ";
    for(int i=0; i<3; i++) {
        cin >>item;
        nptr=new (node);
        nptr ->data = item;
        nptr ->next = NULL;

        if(list==NULL) {
            list = nptr;
            tptr = nptr;
        }
        else {
            tptr ->next = nptr;
            tptr = nptr;
        }

    }
    //Display the result of linked list
    cout << "Linked List: ";
    tptr=list;
    for(int i=0; i<3; i++) {
        cout << tptr ->data << " ";
        

        cout << "Address:"<< tptr << " ";
        tptr = tptr ->next;


    }
    return 0;
}
/*
Insert items: 10 20 30
Linked List: 10 Address:0x1051850 20 Address:0x1051860 30 Address:0x1051718 
*/