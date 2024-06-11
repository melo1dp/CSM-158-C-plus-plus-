#include <iostream>
using namespace std;

int main(){
    float num1, num2, num3;
    char op;
        cout << "Enter first number: ",
        cin >> num1;
        cout << "Enter operator (*, /, +, -, %): ";
        cin >> op;
        cout << "Enter second number: ";
        cin >> num2;


    switch (op){
    case '+': 
        num3 = num1 + num2;
        cout << "Your answer is: " << num3 << endl;
        break;
    case '-': 
        num3 = num1 - num2;
        cout << "Your answer is: " << num3 << endl;
        break;
    case '*': 
        num3 = num1 * num2;
        cout << "Your answer is: " << num3 << endl;
        break;
    case '/':
        num3 = num1 / num2;
        cout << "Your answer is: " << num3 << endl;
        break;
    default: 
        cout <<"Operator is Invalid" << endl;
}
return 0;
}