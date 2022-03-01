#include <iostream>
#include "validData.h"

int validChosen(int& chosen){
    while(true){
        std::cin >> chosen;
        if((chosen != 0 && chosen != 1 && chosen != 2) && (chosen < '0' || chosen > '9'))
            std::cout << "Select 0, 1 or 2" << std::endl;
        else
            return chosen;
    }
}

int validDataExp(double& a, double& b, double& step){
    if(a <= b && step > 0)
        return 1;
    else{
        std::cout << "Введите: (a <= b)&&(step > 0)" << std::endl;
        return 0;
    }
}

int validDataY(double& a, double& b, double& step, int& n){
    if (a <= b && step > 0 && n > 1)
        return 1;
    else{
        std::cout << "Введите: (a <= b)&&(step > 0)&&(n > 1) " << std::endl;
        return 0;
    }
}