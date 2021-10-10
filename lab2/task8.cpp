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
    if (wayOfRoundingChar == 'r')
        cout << "Yout num = " << round(num) << endl;
    else if (wayOfRoundingChar == 'c')
        cout << "Yout num = " << ceil(num) << endl;
    else if (wayOfRoundingChar == 'f')
        cout << "Yout num = " << floor(num) << endl;
    else if (wayOfRoundingChar == 't')
        cout << "Yout num = " << trunc(num) << endl;
    else 
        cout << "Enter correct data" << endl;
    return 0;
}