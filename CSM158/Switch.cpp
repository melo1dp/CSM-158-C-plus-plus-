#include <iostream>
using namespace std;

int main(){
    char grade;
    cout <<"Welcome to the interview room" << endl;
    cout << "Enter your grade: ";
    cin >> grade;

    switch (grade)
    {
    case 'A':
    case 'a':
        cout << "Your grade is within the range of 70 - 100" << endl;
        cout << "You're welcome to the interview";
        break;
    case 'B':
    case 'b':
        cout << "Your grade is within the range of 60 - 69" << endl;
        cout << "You're welcome to the interview";
        break;
    case 'C':
    case 'c':
        cout << "Your grade is within the range of 50 - 59" << endl;
        cout << "You're welcome to the interview";
        break;
    case 'D':
    case 'd':
         cout << "Your grade is within the range of 40 - 49" << endl;
         cout << "You're welcome to the interview";
         break;
    case 'F':
    case 'f':
         cout << "Your grade is within the range of 0 - 39" << endl;
         cout << "You're not welcome to the interview";
         break;

    default:
        cout << "Please re-enter your grade" << endl;
        break;
    }




return 0;
}