#include <iostream>
using namespace std;

class SumCalculator {
public:
    int sum(int a, int b) {
        return a + b;
    }

  
    int sum(int a, int b, int c) {
        return a + b + c;
    }

    int sum(int a, int b, int c, int d) {
        return a + b + c + d;
    }
};

int main() {
    SumCalculator calculator;

    int result2 = calculator.sum(5, 10);              
    int result3 = calculator.sum(1, 2, 3);             
    int result4 = calculator.sum(2, 4, 6, 8);          

    cout << "Sum of 2 numbers: " << result2 << endl;
    cout << "Sum of 3 numbers: " << result3 << endl;
    cout << "Sum of 4 numbers: " << result4 << endl;

    return 0;
}
