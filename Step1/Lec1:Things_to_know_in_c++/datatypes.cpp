#include <iostream>
using namespace std;

int main() {
    // Integer types
    int a = 10;
    short b = 20;
    long c = 30L;
    long long d = 40LL;
    unsigned int e = 50U;

    // Floating point types
    float f = 3.14f;
    double g = 2.71828;
    long double h = 1.6180339887L;

    // Character types
    char i = 'A';
    wchar_t j = L'B';
    char16_t k = u'C';
    char32_t l = U'D';

    // Boolean type
    bool m = true;

    cout << "int: " << a << endl;
    cout << "short: " << b << endl;
    cout << "long: " << c << endl;
    cout << "long long: " << d << endl;
    cout << "unsigned int: " << e << endl;
    cout << "float: " << f << endl;
    cout << "double: " << g << endl;
    cout << "long double: " << h << endl;
    cout << "char: " << i << endl;
    cout << "wchar_t: " << j << endl;
    cout << "char16_t: " << k << endl;
    cout << "char32_t: " << l << endl;
    cout << "bool: " << m << endl;

    // ====================================================

    string str;
    cout << "Enter a string: ";
    getline(cin, str);// getline reads a complete line with also spaces
                     // If you want to read a single word, you can use cin >> str;
                    // cin >> str; // This will read only until the first space 
    cout << str;
    return 0;
}