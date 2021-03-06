// Exercise 09.2
// This version of the sample app adds the ability to detect
// long long and unsigned long long types.

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

template<typename T1, typename T2>
string return_type(T1 a, T2 b) {
     if (typeid(a + b) == typeid(int))
          return "int";
     if (typeid(a + b) == typeid(unsigned))
          return "unsigned";
     if (typeid(a + b) == typeid(float))
          return "float";
     if (typeid(a + b) == typeid(double))
          return "double";
     if (typeid(a + b) == typeid(char))
          return "char";

// LONG TESTS ADDED HERE.

     if (typeid(a + b) == typeid(long))
          return "long";
     if (typeid(a + b) == typeid(unsigned long))
          return "unsigned long";

// LONG LONG TESTS ADDED HERE.

     if (typeid(a + b) == typeid(long long))
          return "long long";
     if (typeid(a + b) == typeid(unsigned long long))
          return "unsigned long long";

     return "other";
}

int main() {
     char ch = 'a';
     int si = 0;
     unsigned ui= 0;
     double x = 0.0;
     float flt = 0.0F;

     cout << "ch + si => " << return_type(ch, si) << endl;
     cout << "si + si => " << return_type(si, si) << endl;
     cout << "si + ui => " << return_type(si, ui) << endl;
     cout << "si + x  => " << return_type(si, x) << endl;
     cout << "x + flt => " << return_type(x, flt) << endl;

     long long sll = 0;

     cout << "si + sll => " << return_type(si, sll) << endl;
     cout << "ui + sll => " << return_type(ui, sll) << endl;
     cin.ignore();   // Wait for user to press ENTER.
     return 0;
}

