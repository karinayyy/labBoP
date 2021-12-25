#include <iostream>

using namespace std;

int main ()
{
    int n, y;
    cout << "Enter n" << endl;
    cin >> n;
    switch (n)
    {
    case 0:
        y = 2;
        break;
    case 1:
        y = 4;
        break;
    case 2:
        y = 5;
        break;
    case 3:
        y = 3;
        break;
    case 4:
        y = 1;
        break;    
    default:
        y = 0;
        break;
    }
    cout << "y = " << y << endl;
    return 0;
}