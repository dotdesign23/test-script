#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  char op;
  float num1, num2;

  cout << "Enter Operator (+,-,*,/): ";
  cin >> op;
  cout << "Enter two operands: ";
  cin >> num1 >> num2;

  switch (op) {
    case '+':
      cout << "Result: " << num1 + num2;
      break;
    case '-':
      cout << "Result: " << num1 - num2;
      break;
    case '*':
      cout << "Result: " << num1 * num2;
      break;
    case '/':
      if (num2 !=0) {  
        cout << fixed << setprecision(2) << (num1 /num2);   
      } else {
        cout << "Error! Division by zero is not allowed.";  
      }
    default:
       cout << "Error! Operator is not correct";  
       break;
   }
}
