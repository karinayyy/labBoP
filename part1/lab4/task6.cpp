#include <iostream>
#include <ctime>

using namespace std;
void bin(int number)
{
    if(number){
        cout << number % 2;
        bin(number / 2);

    }
}
int main(){
    int number;
    cin >> number;
    bin(number);
    return 0;
}