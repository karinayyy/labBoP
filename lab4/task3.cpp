// 1.3 Сортування за зменшенням

// Написати програму, яка сортує елементи масиву цілих чисел за зменшенням.

#include <iostream>

using namespace std;  
int main()
{
    const int n = 5;
    int a[] = {21, 3, 12, 5, 4};
    bool repeat;
    do{
        repeat = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] < a[i+1])
            // Обмінюємо елементи
            {
                double temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
                repeat = true;
            }
        }
    }while (repeat);
    for (int i = 0; i < n; i++){
        cout << a[i] << ' '; 
    }
    return 0;
}