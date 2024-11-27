#include <iostream>
#include <malloc.h>
using namespace std;

int main (){
    int x  = 80;

    int * y = &x; 

    cout <<  y << "  -   " << *y  << endl ;

    int * pt = (int *) malloc(sizeof(int)*3);

    *pt = 30;
    *pt + 1 = 40;
    *pt + 2 = 50;

    cout << *pt;
    cout << *pt + 1;

int main (){
    int x  = 80;

    int * y = &x; 

    cout <<  y << "  -   " << *y  << endl ;

    int * pt = (int *) malloc(sizeof(int)*3);

    *pt = 30;
    pt[1] = 40;
    pt[2] = 50;

    for (int i = 0; i < 3; i++){
        cout << *pt+ i;
    }

}