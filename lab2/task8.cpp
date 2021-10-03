#include <iostream>
#include <cmath>

using namespace std;

int main () 
{
    cout << "Enter the number" << endl;
    double num;
    cin >> num;
    cout << "Enter r for round, c for ceil, f for floor or t for trunc" << endl;
    char wayOfRoundingChar;
    cin >> wayOfRoundingChar;
    wayOfRoundingChar = toupper(wayOfRoundingChar);
    int wayOfRoundingSymnol = wayOfRoundingChar;
    if (wayOfRoundingSymnol == 82)
        cout << "Yout num = " << round(num) << endl;
    else if (wayOfRoundingSymnol == 67)
        cout << "Yout num = " << ceil(num) << endl;
    else if (wayOfRoundingSymnol == 70)
        cout << "Yout num = " << floor(num) << endl;
    else if (wayOfRoundingSymnol == 84)
        cout << "Yout num = " << trunc(num) << endl;
    else 
        cout << "Enter correct data" << endl;
    // cout << "Check" << round(12.5) << endl;
    // cout << "Check" << ceil(12.5) << endl;
    // cout << "Check" << floor(12.5) << endl;
    // cout << "Check" << trunc(12.5) << endl;
    return 0;
}