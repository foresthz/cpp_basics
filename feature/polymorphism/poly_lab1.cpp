
#include <iostream>
#include <string>
using namespace std;

class PolyOne {
public:
    int sayHello(string name) {
        cout << "hello ! " << name << endl;
        return 0;
    }

    void sayHello(string name1, string name2) {
        cout << "hello you two: " << name1 << " and " << name2 << endl;
    }
};

int main() {
    // no new operator is needed. 
    PolyOne one;
    // cannot use single quote? 
    one.sayHello("  ooo ");
    one.sayHello("p1", "p2");
    return 0;
}