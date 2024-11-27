#include <iostream>
using namespace std;

int main (){
    string university = "BRAB University Muzaffarpur";

    cout << university.length() << endl;
    cout << university.substr(0,3) << endl;
    cout << university.find("University") << endl;

    string s1 = "Harshit";
    string s2 = "Harshit";
    cout << (s1 == s2);

}