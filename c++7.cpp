#include <iostream>
using namespace std;

// Base class
class Base {
public:
    virtual int sum(int a, int b, int c) {
        return a + b + c;
    }
};


class Derived : public Base {
public:
    
    int sum(int a, int b, int c) override {
        return (a + b + c) * 2;  
    }
};

int main() {
    Base baseObj;     
    Derived derivedObj; 

    cout << "Sum using Base class object: " << baseObj.sum(5, 10, 15) << endl;

    
    cout << "Sum using Derived class object: " << derivedObj.sum(5, 10, 15) << endl;

  
    Base* basePtr = &derivedObj;
    cout << "Sum using Base class pointer to Derived class object: " << basePtr->sum(5, 10, 15) << endl;

    return 0;
}
