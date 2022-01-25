#include <iostream>

class Sum{
private:
    static int s_value;
public:
    Sum(int value = 0){
        s_value += value;
    }
    int getStaticValue(){return s_value;}
};

int Sum::s_value = 0;


int main(){
    Sum zero;
    std::cout << zero.getStaticValue() << std::endl;
    Sum first = 1;
    std::cout << first.getStaticValue() << std::endl;
    Sum second = 2;
    std::cout << second.getStaticValue() << std::endl;
    Sum third = 3;
    std::cout << third.getStaticValue() << std::endl;
    return 0;
}