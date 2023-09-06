#include <iostream>
using namespace std;

//square 函数模板的定义
template <class T>  
T square(T number) 
{
     return number*number;
}

int main() 
{
	int userInt;
    float userFloat;

    cout.precision(5);
    cout<<"请输入一个整数和一个浮点数：";
    cin>>userInt>>userFloat;
    cout<<"它们的平方分别是：";
    cout<<square(userInt)<<" 和 "<<square(userFloat)<<endl;

    return 0;
}