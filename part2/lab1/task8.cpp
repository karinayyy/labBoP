#include <iostream>
#include <cmath>

class quadraticEquation{
private:
    double m_a, m_b, m_c;
public:
    quadraticEquation(double a, double b, double c);
    double getA(){return m_a;}
    double getB(){return m_b;}
    double getC(){return m_c;}
};

quadraticEquation::quadraticEquation(double a = 0, double b = 0, double c = 0){
    m_a = a;
    m_b = b;
    m_c = c;
}

void squareFound(quadraticEquation &eq){
    if(eq.getA() == 0){
        if(eq.getB() == 0)
            if(eq.getC() == 0)
                std::cout << "Бессконечное кол-во корней" << std::endl;
            else
                std::cout << "Нет коренй" << std::endl;
        else{
            double x1 = -eq.getC() / eq.getB();
            std::cout << "x1 = " << x1 << std::endl;
        }
    }else{
        double d = eq.getB()*eq.getB() - (4.0 * eq.getA() * eq.getC());
        if (d < 0)
            std::cout << "Нет корней" << std::endl;
        else if (d > 0){
            double x1, x2;
            d = sqrt(d);
            x1 = (-eq.getB() + d) / (2.0 * eq.getA());
            x2 = (-eq.getB() - d) / (2.0 * eq.getA());
            std::cout << "x1 = " << x1 << ", x2 = " << x2 << std::endl;
        }else{
            double x1 = -eq.getB() / (2.0 * eq.getA());
            std::cout << "x1 = " << x1 << std::endl;
        }
    }
}

int main(){
    quadraticEquation eq;
    squareFound(eq);
    quadraticEquation eq1(0,0,3);
    squareFound(eq1);
    quadraticEquation eq2(0,2,3);
    squareFound(eq2);
    quadraticEquation eq3(1,2,3);
    squareFound(eq3);
    quadraticEquation eq4(1,3,1);
    squareFound(eq4);
    quadraticEquation eq5(9,6,1);
    squareFound(eq5);
    return 0;
}