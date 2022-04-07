#include <iostream>

template<typename T>
void SearchOnInterval(int a, int b, T arr[]){
    std::cout << "Your nums on interval from " << a << " to " << b << std::endl;
    for(int i = a; i <= b; i++)
        std::cout << arr[i] << ' ';
}

int main(){
    const int SIZE = 10;

    int Iarr[10]{1,2,3,4,5,6,7,8,9,0};
    std::cout << "Your nums" << std::endl;
    for(int i = 0; i < SIZE; i++)
        std::cout << Iarr[i] << ' ';
    std::cout << std::endl;
    SearchOnInterval(2,6, Iarr);

    double Darr[SIZE]{1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,0.0};
    std::cout << "Your nums" << std::endl;
    for(int i = 0; i < SIZE; i++)
        std::cout << Darr[i] << ' ';
    std::cout << std::endl;
    SearchOnInterval(1,7, Darr);

    char CHarr[SIZE]{'s','a','s','h','a','l','o','x','<','3'};
    std::cout << std::endl << "Your nums" << std::endl;
    for(int i = 0; i < SIZE; i++)
        std::cout << CHarr[i] << ' ';
    std::cout << std::endl;
    SearchOnInterval(0,10, CHarr);

    return 0;
}