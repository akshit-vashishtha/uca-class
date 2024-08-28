#include <iostream>
using namespace std;

// Function to calculate (x^y) % n using Modular Exponentiation
int modExp(int x, int y, int n) {
    int result = 1;
    x = x % n;  // Update x if it is more than or equal to n

    while (y > 0) {
        // If y is odd, multiply x with the result
        if (y % 2 == 1) {
            result = (result * x) % n;
        }

        // y must be even now
        y = y >> 1;   // y = y / 2
        x = (x * x) % n;  // Change x to x^2
    }

    return result;
}

int main() {
    int x = 2, y = 10, n = 1000;
    cout << "Result: " << modExp(x, y, n) << endl;
    return 0;
}

