#include <iostream>


using namespace std;

int main()
{
    double inch, mm;
    cout << "Введите значение в дюймах, чтобы получить миллиметры " << endl;
    cin >> inch;
    mm = inch * 25.4;
    inch >= 0 ? cout << "Ваше значение в миллиметрах = " << mm << " мм"<< endl : cout << "Введены неправильные данные" << endl;
    return 0;
}
