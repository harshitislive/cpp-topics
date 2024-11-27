#include <iostream>
using namespace std;


int main (){
    int arr[4] = {12, 34, 564, 64};
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

    cout << "\nPrinting Integer array" << endl;
    for (int i = 0; i < 4; i++){
        cout << arr[i] << " ";
    }

    cout << "\nPrinting Character array" << endl;
    for (int i = 0; i < 5; i++){
        cout << vowels[i] << " ";
    }
}

