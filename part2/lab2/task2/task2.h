#ifndef YClass_h
#define YClass_h

class YClass{
public:
    double findMinSecondDerivative(double a, double b, double step, int n, double& min);   
    virtual double indFunction(double x, double n) = 0;
};


#endif