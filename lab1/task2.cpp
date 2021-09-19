#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

   //Завдання 2
    //Розробити алгоритм та написати програму, яка зчитує вісім значень і повертає середнє арифметичне.

    int a, b, c, d, e, f, g, h, result;
    cout << "Введите 8 цифр чтобы получить среднее арифметическое " << endl;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;
    result = (a + b + c + d + e + f + g + h) / 8;
    cout << "Среднее арифметическое = " << result << endl;

    return 0;
}
