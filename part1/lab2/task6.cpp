#include <iostream>

using namespace std;

int main()
{
    char symbol;
    cout << "Enter the symbol" << endl;
    cin >> symbol;
    int num = symbol;
    cout << "Num = " << num << endl;
    cout << "Hex code of entered char = " << hex << num << endl;
    return 0;
}