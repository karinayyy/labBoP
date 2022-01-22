#include <iostream>
#include <cassert>

class Fraction{
private:
    int m_numerator;
    int m_denominator;
    int gcd(int a, int b){
        while(a!=b){
            if(a>b)
                a-=b;
            else
                b-=a;
        }
        return a;
    }
public:
    Fraction(int numerator = 0, int denominator = 1){
        assert(denominator != 0);
        if(numerator == 0){
            m_numerator = 0;
            m_denominator = 1;
        }else{
            int sign = 1;
            if(numerator < 0){
                sign *= -1;
                numerator *= -1;
            }
            if(denominator < 0){
                sign *= -1;
                denominator *= -1;
            }
            int tmp = gcd(numerator, denominator);
            m_numerator = numerator/tmp*sign;
            m_denominator = denominator/tmp;
        }
    }

    int getNumerator() { return m_numerator; }
    int getDenominator() { return m_denominator; }
    

    friend Fraction operator+(const Fraction &drob1, const Fraction &drob2);
    friend std::ostream& operator<<(std::ostream &out, const Fraction &finDrob);
    friend std::istream& operator>>(std::istream &in, Fraction &drob);

};

Fraction operator+(const Fraction &drob1, const Fraction &drob2){
    Fraction tmp(drob1.m_numerator*drob2.m_denominator
        +drob2.m_numerator*drob1.m_denominator,
        drob1.m_denominator*drob2.m_denominator);
    return tmp;
}

std::ostream& operator<<(std::ostream &out, const Fraction &finDrob){
    if(finDrob.m_denominator == 1){
        out << finDrob.m_numerator;
    }else{
        out << finDrob.m_numerator << "/" << finDrob.m_denominator;
    }
    return out;
}

std::istream& operator>>(std::istream &in, Fraction &drob){
    in >> drob.m_numerator;
    in >> drob.m_denominator;
    return in;
}

int main(){
    Fraction drob1;
    Fraction drob2;
    std::cout<<"Enter first fraction "<<std::endl;
    std::cin>>drob1;
    std::cout<<"Enter second fraction "<<std::endl;
    std::cin>>drob2;
    Fraction finalres = drob1+drob2;
    std::cout<<finalres<<std::endl;
}