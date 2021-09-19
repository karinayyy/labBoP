#include <clocale>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, result;
    cout << "Введите число факториал которого Вы хотите посчитать " << endl;
    cin >> n;
    result = 1;
    while (n != 1) {
        result *= n;
        n--;
    }
    cout << "Факториал введенного числа = " << result << endl;
    
    return 0;
}
