#include <iostream>
using namespace std;

int main(){
   string myCars[] = {"Volvo", "Mercedes", "CRV", "Accord"};
        for (int i = 0; i <= sizeof(myCars)/sizeof(string); i++)
        cout << i << endl;
return 0;
}