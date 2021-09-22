#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int a, b, h, n, x, i, y, j, s;
    cout << "Введите входные данные (интервал a-b, шаг h, n) " << endl;
    cin >> a >> b >> h >> n;
    if (a <= b){
	if (h > 0){
		if (n > 1) {
		    x = a;
		    do {
		        if (x < 0) {
		            y = 1;
		            i = 1;
		            do {
		                s = 0;
		                j = 1;
		                do {
		                    s += pow((x - pow(i, 2) + j), 2);
		                    j++;
		                } while (j <= n);
		                y *= s;
		                i++;
		            } while (i <= (n - 1));
		        }

		        else if (x >= 0) {
		            y = 0;
		            i = 0;
		            do {
		                y += (x - 1) / (i + 1);
		                i++;
		            } while (i <= (n - 1));
		        }
		        cout << "x = " << x << " y = " << y << endl;
		        x += h;
		    } while (x <= b);
		    cout << "end" << endl;
		}
		else if (n < 1) {
		    cout << "incorrect n" << endl;
		}
	} else {
		cout << "Wrong h" << endl;
	}
    }else {
        cout << "Wrong a b" << endl;
    }
}
