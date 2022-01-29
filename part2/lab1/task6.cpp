#include <iostream>

class ComplexNum{
private:
    double m_real, m_imUnit;
public:
    ComplexNum(double real = 0, double imUnit = 0){
        m_real = real;
        m_imUnit = imUnit;
    }

    friend ComplexNum operator+(const ComplexNum &num1, const ComplexNum &num2);
    friend ComplexNum operator-(const ComplexNum &num1, const ComplexNum &num2);
    friend ComplexNum operator*(const ComplexNum &num1, const ComplexNum &num2);
    friend ComplexNum operator/(const ComplexNum &num1, const ComplexNum &num2);
    friend std::ostream& operator<<(std::ostream &out, const ComplexNum &num);
    friend std::istream& operator>>(std::istream &in, ComplexNum &num);

};

ComplexNum operator+(const ComplexNum &num1, const ComplexNum &num2){
    return ComplexNum (num1.m_real + num2.m_real,
                num1.m_imUnit + num2.m_imUnit);
}

ComplexNum operator-(const ComplexNum &num1, const ComplexNum &num2){
    return ComplexNum(num1.m_real - num2.m_real,
                num1.m_imUnit - num2.m_imUnit);
}

ComplexNum operator*(const ComplexNum &num1, const ComplexNum &num2){
    return ComplexNum(num1.m_real * num2.m_real - num1.m_imUnit * num2.m_imUnit,
                    num1.m_real * num2.m_imUnit + num1.m_imUnit * num2.m_real);
}

ComplexNum operator/(const ComplexNum &num1, const ComplexNum &num2){
    return ComplexNum((num1.m_real * num2.m_real + num1.m_imUnit * num2.m_imUnit)/(num2.m_real * num2.m_real + num2.m_imUnit * num2.m_imUnit),
                    (num2.m_real * num1.m_imUnit - num1.m_real  * num2.m_imUnit)/(num2.m_real * num2.m_real + num2.m_imUnit * num2.m_imUnit));
}

std::ostream& operator<<(std::ostream &out, const ComplexNum &num){
    if(num.m_imUnit < 0){
        if(num.m_imUnit == -1)
            out << "ComplexNum = " << num.m_real << " - i";
        else
            out << "ComplexNum = " << num.m_real << num.m_imUnit << "i";
    }else{
        if(num.m_imUnit == 1)
            out << "ComplexNum = " << num.m_real << " + i";
        else
            out << "ComplexNum = " << num.m_real << " + " << num.m_imUnit << "i";
    }
    return out;
}

std::istream& operator>>(std::istream &in, ComplexNum &num){
    return in >> num.m_real >> num.m_imUnit;
}

int main(){
    ComplexNum n1, n2;
    std::cout << "Enter 1st complex num" << std::endl;
    std::cin >> n1;
    std::cout << "Enter 2nd complex num" << std::endl;
    std::cin >> n2;
    std::cout << "+res = " << n1 + n2 << std::endl;
    std::cout << "-res = " << n1 - n2 << std::endl;
    std::cout << "*res = " << n1 * n2 << std::endl;
    std::cout << "/res = " << n1 / n2 << std::endl;
    return 0;
}