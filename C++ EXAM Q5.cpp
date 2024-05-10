#include <iostream>
using namespace std;

class MathOperations {
public:
    double divide(double numerator, double denominator) {
        if (denominator == 0) {
            throw runtime_error("Division by zero error.");
        }
        if (numerator < 0 || denominator < 0) {
            throw runtime_error("Division of negative numbers not allowed.");
        }
        return numerator / denominator;
    }
};

int main() {
    MathOperations math;

    try {
        double result1 = math.divide(10, 0);
        cout << "Result 1: " << result1 << endl;
    } catch (const exception& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    try {
        double result2 = math.divide(-10, 5);
        cout << "Result 2: " << result2 << endl;
    } catch (const exception& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    try {
        double result3 = math.divide(20, 5);
        cout << "Result 3: " << result3 << endl;
    } catch (const exception& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}