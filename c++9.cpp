#include <iostream>
using namespace std;

// Template function for sum
template <typename T>
T sum(T a, T b) {
    return a + b;
}

// Overloaded template function for sum with three parameters
template <typename T>
T sum(T a, T b, T c) {
    return a + b + c;
}

// Overloaded template function for sum with four parameters
template <typename T>
T sum(T a, T b, T c, T d) {
    return a + b + c + d;
}

int main() {
    int x = 5, y = 10, z = 15, w = 20;
    double p = 3.14, q = 2.71;

   
    cout << "Sum of two integers: " << sum(x, y) << endl;


    cout << "Sum of three integers: " << sum(x, y, z) << endl;

   
    cout << "Sum of four integers: " << sum(x, y, z, w) << endl;

    
    cout << "Sum of two doubles: " << sum(p, q) << endl;

    return 0;
}
