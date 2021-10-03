#include <iostream>

using namespace std;

int main()
{
    cout << "Enter n or s" << endl;
    char chose;
    cin >> chose;
    if (chose == 'n'){
        int num;
        cout << "Enter num" << endl;
        cin >> num; 
        cout << "Hex code of entered char = " << hex << num << endl;
    }else if (chose == 's'){
        char symbol;
        cout << "Enter the symbol" << endl;
        cin >> symbol;
        int num = symbol;
        cout << "Hex code of entered char = " << hex << num << endl;
    }
    return 0;
}