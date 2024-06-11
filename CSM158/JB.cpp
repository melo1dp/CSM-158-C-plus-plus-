#include <iostream>
using namespace std;

int main(){
    int hoursWorked, numOfChildren;
    double regularRate = 5, grossPay, incomeTax, NHIL, districtTax, eduFund,netPay, overRate = 1.5 * 5;
        cout << "Number of hours worked: ";
        cin >> hoursWorked;
        cout << "Number of children: ";
        cin >> numOfChildren;


if (hoursWorked <= 40){
    grossPay = regularRate * hoursWorked;

}
else{
    grossPay = regularRate * 40 + overRate * (hoursWorked - 40);
}

    incomeTax = 0.15 * grossPay;
    NHIL = 0.025 * grossPay;
    districtTax = 0.01 * grossPay;

if (numOfChildren > 3){
    eduFund = 0.5 * (numOfChildren - 3);
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
