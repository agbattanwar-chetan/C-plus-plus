#include <iostream>
using namespace std;

int main(){
// Type Casting => Converting one data type to another.

//  1. Implicit Type Casting (Automatic)
// Process: C++ automatically converts data types
// Also called: Type Promotion
int a = 5;
float b = 2.5;
float result = a + b; // 'a' automatically converted to float

// Character to Integer Example:
char ch = 'a';
int num = ch; // Stores ASCII value 97
cout << num; // Output: 97

// Integer to Character Example:
int ascii = 98;
char cha = ascii; // Converts to character
cout << cha; // Output: 'b'

// 2. Explicit Type Casting (Manual)
// Process: Programmer manually specifies conversion
// Syntax: (type) variable_name
float pi = 3.14;
int numb = (int) pi; // num = 3 (decimal part removed)

char chara = 'A';
int code = (int)chara; // code = 65 (ASCII of A)
} 