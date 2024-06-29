#include <iostream>
using namespace std;

int main () {
    int a , b;
    char op;
    
    cout << " Enter the value of a : ";
    cin >> a;
    cout << " Enter the value of b : ";
    cin >> b;
    cout << " Enter the operation you want : ";
    cin >> op;
    
    switch (op) {
        
        case '+' : cout << " a + b = " << a+b ;
        break ;
        
        case '-' : cout << " a - b = " << a-b ;
        break ;
        
        case '*' : cout << " a * b = " << a*b ;
        break;
        
        case '/' : cout << " a / b = " << a/b ;
        break;
        
        default : cout << " Please enter a valid operator!";
    }
    
    return 0;
}
