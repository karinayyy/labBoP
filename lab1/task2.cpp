#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b, c, d, e, f, g, h, result;
    cout << "Введите 8 цифр чтобы получить среднее арифметическое " << endl;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;
    result = (a + b + c + d + e + f + g + h) / 8;
    cout << "Среднее арифметическое = " << result << endl;

    return 0;
}
