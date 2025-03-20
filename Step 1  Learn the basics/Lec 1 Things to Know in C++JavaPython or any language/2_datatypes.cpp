#include <bits/stdc++.h> // Header that includes most standard libraries
using namespace std;

int main() {
    // Integer Data Types: int, long, long long
    
    // int:
    // Size: Typically 4 bytes (32 bits)
    // Range: -2^31 to 2^31-1 (~-2.1×10^9 to 2.1×10^9)
    int x = 10;
    cout << "Value of x: " << x << endl;
    cout << "Size of x (int): " << sizeof(x) << " bytes" << endl;

    // long:
    // On 32-bit systems:
    // Size: Typically 4 bytes (32 bits)
    // Range: -2^31 to 2^31-1 (~-2.1×10^9 to 2.1×10^9)
    // On 64-bit systems:
    // Size: Typically 8 bytes (64 bits)
    // Range: -2^63 to 2^63-1 (~-9.2×10^18 to 9.2×10^18)
    long y = 1234567890; // A valid range for long
    cout << "Value of y: " << y << endl;
    cout << "Size of y (long): " << sizeof(y) << " bytes" << endl;

    // long long:
    // Size: Always 8 bytes (64 bits)
    // Range: -2^63 to 2^63-1 (~-9.2×10^18 to 9.2×10^18)
    long long z = 12345678987654321LL; // Use LL for long long literals
    cout << "Value of z: " << z << endl;
    cout << "Size of z (long long): " << sizeof(z) << " bytes" << endl;

    // Decimal Data Types: float, double, long double

    // float:
    // Size: 4 bytes (32 bits)
    // Range: ~2^-126 to ~2^128 (~1.2×10^-38 to ~3.4×10^38)
    float f = 3.14f;
    cout << "Value of f: " << f << ", Size of f (float): " << sizeof(f) << " bytes" << endl;

    // double:
    // Size: 8 bytes (64 bits)
    // Range: ~2^-1022 to ~2^1024 (~2.2×10^-308 to ~1.8×10^308)
    double d = 3.141592653589793;
    cout << "Value of d: " << d << ", Size of d (double): " << sizeof(d) << " bytes" << endl;

    // long double:
    // Size: Typically 8 or 16 bytes (depends on the platform)
    // Range: ~2^-16382 to ~2^16384 (~3.4×10^-4932 to ~1.1×10^4932)
    long double ld = 3.141592653589793238L;
    cout << "Value of ld: " << ld << ", Size of ld (long double): " << sizeof(ld) << " bytes" << endl;

    // Strings and Input Handling
    string s1 = "Hey";
    string s2 = "Striver";
    cout << "s1: " << s1 << ", s2: " << s2 << endl;

    cout << "Enter a string: ";
    string str; // Variable for storing input
    cin.ignore(); // Clear the input buffer before getline
    getline(cin, str); // Read a full line including spaces
    cout << "You entered: " << str << endl;

    // Character Data Type
    // char (signed):
    // Size: 1 byte (8 bits)
    // Range: -2^7 to 2^7-1 (~-128 to 127)
    // char (unsigned):
    // Range: 0 to 2^8-1 (~0 to 255)
    char ch = 'g';
    cout << "Value of ch: " << ch << ", Size of ch (char): " << sizeof(ch) << " bytes" << endl;

    return 0;
}
