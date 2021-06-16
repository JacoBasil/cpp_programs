#include <iostream>
using namespace std;
 
// Global variable declaration:
int g;
 
int main () {
   // Local variable declaration:
   int a, b;
 
   /* Actual initialization 
   When a local variable is defined, it is not initialized by the system, you must initialize it yourself. 
   Global variables are initialized automatically by the system when you define them as follows.
   It is a good programming practice to initialize variables properly, otherwise sometimes program would produce unexpected result.
   */
   a = 10;
   b = 20;
   g = a + b;
  
   cout << g << "\n";
 
   return 0;
}