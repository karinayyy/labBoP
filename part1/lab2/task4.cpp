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
    add = 1;
    while(add > eps){
        add = 1/(pow(2,i));
        y += add;
        cout << "i = " << i << endl << "y = " << y << endl << "add = " << add << endl;
        i++;
    }
}
