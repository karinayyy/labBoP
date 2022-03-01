#include <iostream>
#include <cmath>
#include "task2.h"
#include "validData.h"

class indFunc : public YClass {
    virtual double indFunction(double x, double n) {
        double y;
        if (x < 0) {
            y = 1;
            for (int i = 1; i <= (n - 1); i++){
                double s = 0;
                for (int j = 1; j <= n; j++){
                    s += pow((x - pow(i, 2) + j), 2);
                }
                y *= s;
            }
        }
        else if (x >= 0) {
            y = 0;
            for (int i = 0; i <= (n - 1); i++){
                y += (x - 1) / (i + 1);
            }
        }
        return y;
    }
};

class expFunc : public YClass {
    virtual double expFunction(double x, int power) {
        double result = 1;
        if(x == 0) return 0;
        if(power == 0) return result;
        if(power > 0){
            for(int i = 0; i < power; i++)
                result *= x;
            return result;
        }else{
            for(int i = 0; i > power; i--)
                result/=x;
            return result;
        }
    }
};

int main(){
    YClass y;
    while(true){
        std::cout << "Do you want to continue? Enter 0 if no, 1 exp, 2 to start individuel func " << std::endl;
        int chosen = validChosen(chosen);
        if(chosen == 0){
            std::cout << "Bye" << std::endl;
            return 0;
        }
        double a, b, step;
        std::cout << std::endl << "Enter a "; 
        std::cin >> a;
        std::cout << std::endl << "Enter b "; 
        std::cin >> b;
        std::cout << std::endl << "Enter step "; 
        std::cin >> step;
        double min;
        if(chosen == 1){
            int n;
            std::cout << std::endl << "Enter n (power) "; 
            std::cin >> n;
            if(validDataExp(a,b,step)){
                min = y.findMinSecondDerivative(a, b, step, n, min);
                std::cout << std::endl << "Min = " << min << std::endl;
            }
        }else{
            int n;
            std::cout << std::endl << "Enter n (num of iterations)";
            std::cin >> n;
            if(validDataY(a,b,step,n)){
                min = y.findMinSecondDerivative(a, b, step, n, min);
                std::cout << std::endl << "Min = " << min << std::endl;
            }
        }
    }
    return 0;
}

