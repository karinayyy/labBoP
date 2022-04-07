#include <iostream>

template<typename T1, typename T2>
class Nums{
private:
    T1 m_num1;
    T2 m_num2;
public:
    Nums(T1 num1 = 0, T2 num2 = 0)
        : m_num1(num1), m_num2(num2) {}
    void print(){
        std::cout << "Num 1: " << m_num1 << "\tNum 2: " << m_num2 << std::endl;
    }
};

int main(){
    int a = 2;
    double b = 3.14;
    Nums<int,double> couple(a,b);
    couple.print();
    return 0;
}