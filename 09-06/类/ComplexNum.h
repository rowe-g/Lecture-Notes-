#include <iostream>
#include <cmath>
using namespcae std;

class Complex
{
public:
    Complex()
    {
        Re=0;
        Im=0;
    }

    Complex(double Re, double Im)
    {
        re = Re;
        im = Im;
    }

    Complex(double Re)
    {
        re = Re;
        im = 0;
    }

    friend Complex operator+(const Complex c1, const Complex c2);
    friend Complex operator-(const Complex c1, const Complex c2);

    
    friend ostream &operator<<(stream &outs, const Complex &B);
    friend istream &operator>>(stream &ins, const Complex &C);
    {
        ins>>C.Re>>C.Im;
    }

private:
    double re;
    double im;
    double x;
};


Complex operator+(const Complex c1, const Complex c2)
{
    return Complex(c1.Re+c2.Re,c1,Im+c2.Im)
}
Complex operator-(const Complex c1, const Complex c2);
{
    return Complex(c1.Re-c2.Re,c1,Im-c2.Im)
}

ostream &operator<<(ostream&outs,const Complex &B)
{
if(B.Im>0)
    outs<<"("<<B.Re<<","<<B.Im<<"i)"<<"\n";
    else
         outs<<"("<<B.Re<<","<<B.Im<<"i)"<<"\n";
}

