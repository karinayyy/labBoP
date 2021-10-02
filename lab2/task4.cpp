#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double y, add, eps;
    int i;
    cout << "Enter eps" << endl;
    cin >> eps;
    y = 0;
    add = 1;
    i = 1;
    while(add > eps){
        y += 1/(pow(2,i));
        add = 1/(pow(2,i));
        i++;
        cout << "i = " << i << endl << "y = " << y << endl << "add = " << add << endl;
    }
}
