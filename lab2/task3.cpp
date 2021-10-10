#include <iostream>

using namespace std;

int main()
{
    int x, n, y, i;
    cout << "Enter x, n " << endl;
    cin >> x >> n;
    if (n >= 0){
        y = 1;
        i = 1;
        while(i <= 2*n){
            (i % 2 == 0) ? y *= (x - i) : y *= (x + i);
            cout << "y = " << y << " i = " << i << endl;
            i++;
        }
        cout << "Y = " << y << endl;
    }else
        cout << "Wrong n" << endl;
    return 0;
}
