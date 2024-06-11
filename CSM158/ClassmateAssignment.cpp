#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numClassmates;
    cout << "Enter the number of classmates: ";
    cin >> numClassmates;

    vector<int> ages(numClassmates);
    vector<int> marks(numClassmates);

    cout << "Enter ages and marks for each classmate:" << endl;
    for (int i = 0; i < numClassmates; ++i) {
        cout << "Classmate " << (i + 1) << " (age mark): ";
        cin >> ages[i] >> marks[i];
    }

    cout << "Concatenation of ages and marks, and their products:" << endl;
    for (int i = 0; i < numClassmates; ++i) {
        cout << "Classmate " << (i + 1) << ": ";
        cout << ages[i] << " " << marks[i] << " " << ages[i] * marks[i] << endl;
    }

    return 0;
}