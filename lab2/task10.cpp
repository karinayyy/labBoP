#include <iostream>

using namespace std;

int main () 
{
    cout << "Ender x" << endl;
    double x;
    cin >> x;
    x < 0 ?  cout << "y = " << -1 << endl : (x > 0 ? cout << "y = " << 1 << endl : cout << "y = " << 0 << endl);
    return 0;
}