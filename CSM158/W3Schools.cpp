#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int myAge, votingAge = 18;

    cout << "Enter your age: ";
    cin >> myAge;

string result = (myAge >= votingAge) ? "You are able to vote" : "You're unable to vote";
    cout << result;


return 0;
}