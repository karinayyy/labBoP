#include <iostream>

using namespace std;

double localVar()
{
    static double a, b;
    char eqs = 'e';
    cout << "Enter a, b" << endl;
    cin >> a >> b;
    return (a != b ? (a < b ? (a) : (b) ) : (eqs));
}

int main()
{
    int num;
    cout << "Enter '0' to quit or '1' to continue" << endl;
    cin >> num;
    if (num == 1){
        cout << localVar() << endl;
        main();
    }else if (num == 0)
        return 0;
    else
        main();
}