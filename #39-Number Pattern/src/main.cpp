#include <iostream>

using namespace std;

//  Write recursive PrintNumPattern function prototype here
void PrintNumPattern(int a, int b);

int main() {
   int num1;
   int num2;

   cin >> num1; // enter 12
   cin >> num2; // enter 3
   PrintNumPattern(num1, num2);
   
   return 0;
}
// Write PrintNumPattern function definition here
// Hint: In the example for input 12 and 3, the first numbers 12 9 6 3 0 are displayed above the recursive call
// Hint: The second set of numbers (3 6 9 12 ) are displayed by placing num1 and its output on the stack

void PrintNumPattern(int a, int b){
   //base case
   if(a == 0){
       cout << a << " ";
   }
   else if(a < 0 ){
      cout << a << " ";
   }
   else{
       cout << a << " ";
       PrintNumPattern(a - b, b);
       cout << a << " ";
   }
}