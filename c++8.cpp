#include <iostream>
using namespace std;

class MyClass {
private:
    int a;

public:
    MyClass(int val) : a(val) {}

    MyClass& operator++() {
        a += 5;
        return *this;
    }

    MyClass& operator--() {
        a -= 1;
        return *this;
    }

    MyClass operator-() {
        a = -a;
        return *this;
    }

    friend MyClass operator!(const MyClass& obj);

    void display() const {
        cout << "Value of a: " << a << endl;
    }
};

MyClass operator!(const MyClass& obj) {
    MyClass temp = obj;
    temp.a = (temp.a == 0) ? 1 : 0;
    return temp;
}

int main() {
    MyClass obj(10);
    cout << "Initial value: ";
    obj.display();

    ++obj;
    cout << "After incrementing by 5: ";
    obj.display();

    --obj;
    cout << "After decrementing by 1: ";
    obj.display();

    -obj;
    cout << "After negating the value: ";
    obj.display();

    MyClass obj2(0);
    MyClass result = !obj2;
    cout << "After applying logical negation (friend function) to 0: ";
    result.display();

    result = !obj;
    cout << "After applying logical negation (friend function) to non-zero value: ";
    result.display();

    return 0;
}
