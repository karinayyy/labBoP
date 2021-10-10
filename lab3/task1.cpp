#include <iostream>

using namespace std;

void localVar()
{
    static double a, b;
    do{
        cin >> a >> b;
        a > b ? cout << a << endl : cout << b << endl;
    }while (a != b);
}

int main()
{
    localVar();
    return 0;
}