// program to print the value of i

#include <iostream>
using namespace std;

int main() {
    char c;
    int n1,n2;
     
    cout << "Enter an operation(+;-;*;/): ";
    cin >> c;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    switch(c) {
        case '+': 
          cout << n1 << "+" << n2 << "= " << n1+n2 << endl;
          break;
        case '-':
          cout << n1 << "-" << n2 << "= " << n1-n2 << endl;
          break;
        case '*':
          cout << n1 << "*" << n2 << "= " << n1*n2 << endl;
          break;
        case '/':
          cout << n1 << "/" << n2 << "= " << n1/n2 << endl;
          break; 
        default:
           cout << "Error! invalid operation" << endl;
           break;
    }
 return 0;
}