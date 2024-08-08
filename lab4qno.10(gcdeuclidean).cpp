#include <iostream>
using namespace std;

// Function to return gcd of a and b
int gcd(int a, int b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

// Driver Code
int main() {
    int a = 48, b = 18;
  
    // Function call
    cout << "GCD(" << a << ", " << b << ") = " << gcd(a, b) << endl;
    a = 56, b = 98;
    cout << "GCD(" << a << ", " << b << ") = " << gcd(a, b) << endl;
    a = 101, b = 10;
    cout << "GCD(" << a << ", " << b << ") = " << gcd(a, b) << endl;

    return 0;
}

