#include <iostream>
using namespace std;

class Number;  // Forward declaration

class PrimeChecker {
public:
    // Friend function to check if a number is prime
    bool isPrime(const Number& num);
};

class Number {
private:
    int value;

public:

    Number(int v) : value(v) {}

    // Getter for the value
    int getValue() const {
        return value;
    }

 
    friend class PrimeChecker;
};

bool PrimeChecker::isPrime(const Number& num) {
    int val = num.getValue();

    if (val <= 1) return false; 
    for (int i = 2; i * i <= val; ++i) {
        if (val % i == 0) {
            return false;  
        }
    }
    return true;  
}

int main() {
    Number num(29);  
    PrimeChecker checker;

    if (checker.isPrime(num)) {
        cout << num.getValue() << " is a prime number." << endl;
    } else {
        cout << num.getValue() << " is not a prime number." << endl;
    }

    return 0;
}
