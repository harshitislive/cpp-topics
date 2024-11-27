#include <iostream>
using namespace std;

class Example {
    string data;
    public:
    Example (){  // Default
        cout << "Object Created" << endl;
        data = "N/A";
    }

    Example (string x){ // Parameterized
        data = x;
        cout << "Object " << x << " created.\n";
    }

    Example (Example &e){ // Copy Constructor
        cout << "Copy Constructor called. " << e.data << endl;
        // this.data = e.data;
    }

    void display(){
        cout << "Data = " << data << endl;
    }
};

int main (){
    Example e1("Apple");
    Example e3("Pen");

    Example e4 = e3;
    // e4.display();
}
