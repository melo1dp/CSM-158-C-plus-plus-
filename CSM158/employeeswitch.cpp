#include <iostream>
using namespace std;

int main(){
    int hoursWorked, numOfChildren;
    double regularMale = 500, regularFemale = 550, overMale = 1.5 * regularMale, overFemale = 1.5 * regularFemale, grossPay, incomeTax, NHIL, districtTax, eduFund, netPay;
    char employeeGender;

            cout << "Number of hours worked: ";
            cin >> hoursWorked;
            cout << "What is your gender: ";
            cin >> employeeGender;
            cout << "Number of Children: ";
            cin >> numOfChildren;

switch (employeeGender)
{
case 'M':
    grossPay = regularMale * hoursWorked;
switch(hoursWorked)
case '=> 40':
    grossPay = regularMale * 40 + overMale * (hoursWorked - 40);
    break;
case 'F': 
     grossPay = regularFemale * hoursWorked;
    switch(hoursWorked)
case '=> 40':
     grossPay = regularFemale * 40 + overFemale * (hoursWorked - 40);
     break;
default:
     cout << "Please only M and F allowed!" << endl;
    break;
}
    incomeTax = 0.15 * grossPay, NHIL = 0.025 * grossPay, districtTax = 0.01 * grossPay;

switch(numOfChildren){
case '> 3':
switch(employeeGender)
case 'M':
    eduFund = 10 * (numOfChildren - 3);
case 'F':
    eduFund = 20 * (numOfChildren - 3);
    break;
default:
    eduFund = 0;
    break;
}
     netPay = grossPay - (incomeTax + NHIL + districtTax + eduFund);

            cout << "Your Gross Pay is: " << grossPay << " GHS" << endl;
            cout << "Your Income Tax is: " << incomeTax << " GHS" << endl;
            cout << "Your NHIL is: " << NHIL << " GHS" << endl;
            cout << "Your District Tax: " << districtTax << " GHS" << endl;
            cout << "Your Educational Fund is: " << eduFund << " GHS" << endl;
            cout << "Your Net Pay is: " << netPay << " GHS" << endl;
return 0;
}