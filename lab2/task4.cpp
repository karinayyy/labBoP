#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double y, i, add, eps;
    cout << "Enter eps" << endl;
    cin >> eps;
    y = 0;
    i = 1;
    do{
        y += 1/(pow(2,i));
        add = 1/(pow(2,i));
        i++;
        cout << "i = " << i << endl << "y = " << y << endl << "add = " << add << endl;
    }while(add >= eps);
}
