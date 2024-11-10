#include <iostream>
using namespace std;


class A;
class B;
class C;

void displayAllDetails(const A& a, const B& b, const C& c);

class A {
private:
    int privateA;
protected:
    int protectedA;
public:
    A(int pA, int prA) : privateA(pA), protectedA(prA) {}

    friend void displayAllDetails(const A& a, const B& b, const C& c);
};

class B {
private:
    double privateB;
protected:
    double protectedB;
public:
    B(double pB, double prB) : privateB(pB), protectedB(prB) {}
    

    friend void displayAllDetails(const A& a, const B& b, const C& c);
};

class C {
private:
    string privateC;
protected:
    string protectedC;
public:
    C(string pC, string prC) : privateC(pC), protectedC(prC) {}
   
    friend void displayAllDetails(const A& a, const B& b, const C& c);
};


void displayAllDetails(const A& a, const B& b, const C& c) {
   
    cout << "Class A details: " << endl;
    cout << "Private data of A: " << a.privateA << endl;
    cout << "Protected data of A: " << a.protectedA << endl;

    cout << "Class B details: " << endl;
    cout << "Private data of B: " << b.privateB << endl;
    cout << "Protected data of B: " << b.protectedB << endl;

    cout << "Class C details: " << endl;
    cout << "Private data of C: " << c.privateC << endl;
    cout << "Protected data of C: " << c.protectedC << endl;
}

int main() {
    
    A a(10, 20);
    B b(30.5, 40.5);
    C c("Hello", "World");

  
    displayAllDetails(a, b, c);

    return 0;
}
