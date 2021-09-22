#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i;
    double y, eps;
    cout << "Enter eps" << endl;
    cin >> eps;
    y = 0;
    i = 1;
    while(y >= eps){
        y += 1/(2*i);
        i++;
        cout << "i = " << i << " y = " << y << endl;
    }
    cout << "Y = " << y << endl;
}
