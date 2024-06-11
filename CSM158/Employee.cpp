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

    if (employeeGender == 'M')
        if (hoursWorked <= 40){
            grossPay = regularMale * hoursWorked;
        }
        else
        {
            grossPay = regularMale * 40 + overMale * (hoursWorked - 40);
        }
    else{
        if (hoursWorked <= 40)
            grossPay = regularFemale * hoursWorked;
         else
            grossPay = regularFemale * 40 + overFemale * (hoursWorked - 40);
}
            incomeTax = 0.15 * grossPay, NHIL = 0.025 * grossPay, districtTax = 0.01 * grossPay;


if (numOfChildren > 3){
    if (employeeGender == 'M')
        eduFund = 10 * (numOfChildren - 3);
    else
        eduFund = 20 * (numOfChildren - 3);
    }
    else
    {
        eduFund = 0;
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
