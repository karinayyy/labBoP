#include <iostream>

using namespace std;

int main()
{
    char symbol;
    cout << "Enter the symbol" << endl;
    cin >> symbol;
    int num = symbol;
    cout << dec << num << ' ' << hex << num << endl;
    return 0;
}