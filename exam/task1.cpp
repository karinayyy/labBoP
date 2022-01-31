#include <iostream>

int multiply(int a, int b){
    int result = 1;
    for(int i = a; i <= b; i++){
        if(i % 2 == 0 && i != 0)
            result*=i;
    }
    return result;
}

int main(){
    int a, b;
    int contin = 1;
    do{
    std::cout << "Enter a, b" << std::endl;
    std::cin >> a >> b;
    if(a <= b){
        std::cout << "Mult = " << multiply(a,b) << std::endl;
    }
    else
        std::cout << "err a > b" << std::endl;
    std::cout << "continue - 1, stop - 0" << std::endl;
    std::cin >> contin;
    if(!contin)
        break;
    }while(contin);
    return 0;
}