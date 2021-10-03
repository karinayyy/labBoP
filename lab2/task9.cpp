#include <iostream>

using namespace std;

int main () 
{
    cout << "Ender x" << endl;
    double x;
    cin >> x;
    if(x < 0)
        cout << "y = " << -1 << endl;
    else if (x > 0)
        cout << "y = " << 1 << endl;
    else 
        cout << "y = " << 0 << endl;
    return 0;
}