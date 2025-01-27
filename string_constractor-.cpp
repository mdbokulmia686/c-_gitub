#include <iostream>

using namespace std;

int main() {
    int int_value;
    long long long_long_value;
    char char_value;
    float float_value;
    double double_value;

    // Read space-separated input
    cin >> int_value >> long_long_value >> char_value >> float_value >> double_value;

    // Print each value on a new line
    cout << int_value << endl;
    cout << long_long_value << endl;
    cout << char_value << endl;
    cout << float_value << endl;  
    cout << double_value << endl;  
}