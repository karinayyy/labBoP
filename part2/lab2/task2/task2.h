#ifndef YClass_h
#define YClass_h

class YClass{
private:
    double a, b, step;
    int n;
public: 
    typedef double (*theFunc)(double, int);
    theFunc func;
    double findMinSecondDerivative(double a, double b, double step, int n, double& min);   
};


#endif