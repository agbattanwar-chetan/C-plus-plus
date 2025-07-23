#include <iostream>
using namespace std;

int main(){
// Data Type Modifiers
// Modifiers change the range and size of base data types.

//  1. signed (Default) => Allows both negative and positive values
signed int a = -100;
int b = 200; // Same as signed int

//  2. unsigned => Only positive values and zero
unsigned int x = 4000;

//  3. short
// • Purpose: Smaller range, less memory
// • Size: 2 bytes
// • Range:-32,768 to +32,767
short int age = 25;

//  4. long
// • Purpose: Larger range, more memory
// • Size: 4 or 8 bytes
// • long long: 8 bytes
long int salary = 900000;
long long int population = 1400000000;
}