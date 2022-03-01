#include <iostream>
#include "validData.h"

int validChosen(int& chosen){
    while(true){
        std::cin >> chosen;
        if((chosen != 0 && chosen != 1) && (chosen < '0' || chosen > '9'))
            std::cout << "Enter 0 or 1" << std::endl;
        else
            return chosen;
    }
}

int validDataY(double& a, double& b, double& step, int& n){
    if (a <= b && step > 0 && n > 1)
        return 1;
    else{
        std::cout << "Enter: (a <= b)&&(step > 0)&&(n > 1) " << std::endl;
        return 0;
    }
}