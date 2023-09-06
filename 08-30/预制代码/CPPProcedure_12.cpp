#include <iostream>
using namespace std;

template <class T1,class T2>        // 模板具有多种类型的参数
T1 sum(T1 valueOne,T2 valueTwo) 
{
	return valueOne+valueTwo;
}

template <class T> T sum(T valueOne,T valueTwo,T valueThree) 
{
    return  valueOne+valueTwo+valueThree;
}

int main() 
{
	float num1,num2,num3;

    cout<<"输入两个数：";
    cin>>num1>>num2;
    cout<<"它们的和是："<<sum(num1,num2)<<endl;
    cout << "输入三个数：";
    cin>>num1>>num2>>num3;
    cout<<"它们的和是："<<sum(num1,num2,num3)<<endl;

    return 0;    
}