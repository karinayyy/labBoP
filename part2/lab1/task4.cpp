#include <iostream>

class CoupleNum{
private:
    double m_firstNum;
    double m_secondNum;
public:
    CoupleNum(double firstNum = 0, double secondNum = 0){
        m_firstNum = firstNum;
        m_secondNum = secondNum;

    }
    double getFirstNum(){return m_firstNum;}
    double getSecondNum(){return m_secondNum;}
    void print(){
        std::cout << m_firstNum << ' ' << m_secondNum << std::endl;
    }
};

int main(){
    CoupleNum nums(1,2);
    nums.print();

    return 0;
}