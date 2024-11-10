#include <iostream>
using namespace std;

class A;  
class B;  
class C;  

// Friend class declaration
class FriendClass {
public:
    void displayA(const A& a);
    void displayB(const B& b);
    void displayC(const C& c);
};

class A {
private:
    int privateA;
protected:
    int protectedA;
public:
    A(int pA, int prA) : privateA(pA), protectedA(prA) {}
   
    friend class FriendClass;
};

class B {
private:
    double privateB;
protected:
    double protectedB;
public:
    B(double pB, double prB) : privateB(pB), protectedB(prB) {}
   
    friend class FriendClass;
};

class C {
private:
    string privateC;
protected:
    string protectedC;
public:
    C(string pC, string prC) : privateC(pC), protectedC(prC) {}
   
    friend class FriendClass;
};

void FriendClass::displayA(const A& a) {
    cout << "Class A: " << endl;
    cout << "Private data: " << a.privateA << endl;
    cout << "Protected data: " << a.protectedA << endl;
}

void FriendClass::displayB(const B& b) {
    cout << "Class B: " << endl;
    cout << "Private data: " << b.privateB << endl;
    cout << "Protected data: " << b.protectedB << endl;
}

void FriendClass::displayC(const C& c) {
    cout << "Class C: " << endl;
    cout << "Private data: " << c.privateC << endl;
    cout << "Protected data: " << c.protectedC << endl;
}

int main() {
    
    A a(10, 20);
    B b(30.5, 40.5);
    C c("Hello", "World");

   
    FriendClass friendObj;

    friendObj.displayA(a);
    friendObj.displayB(b);
    friendObj.displayC(c);

    return 0;
}
