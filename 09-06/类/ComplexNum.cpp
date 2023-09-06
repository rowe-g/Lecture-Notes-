//
// Created by Yiming Wang on 2023/9/6.
//

#include "ComplexNum.h"
#include <iostream>
#include <cmath>
using namespace std;

int main( )
{
    Complex c1(5.0,10.0);   	//5+10i
    Complex c2(3.0,-2.5);    	//3-2.5i
    Complex c3,c4;
    c3=c1+c2;
    c4=c1-5;
    cout<<c1<<c2<<c3<<c4;
    Complex c5;
    cout<<"请输入一个复数,实部和虚部以空格分开:"<<endl;
    cin>>c5;
    cout<<"输入的复数为:"<<c5<<endl;
 c4=5+c5;

    cout<<c4<<endl;
    return 0;
}