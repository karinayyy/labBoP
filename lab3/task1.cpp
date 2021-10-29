#include <iostream>

using namespace std;

void minMax(int i)
{
    static int min = i;
    static int max = i;
    if (i < min)
        min = i;
    if(i > max)
        max = i;
    cout << min<< endl << max << endl;
}

int main()
{
    int i;
    do{
        cout << "Enter i" << endl;
        cin >> i;
        minMax(i);
    }while (i);
    return 0;
}