/* name: ex0313.cpp
   函数摸板应用举例，通过引用做参数实现变量交换。
*/
#include <iostream>
using namespace std;

template <class T> void swaps(T &var1,T &var2) 
{
    T  temp ;
	temp=var1;
	var1=var2;
	var2=temp;
}

int main() 
{
	char firstChar,secondChar;
    int firstInt,secondInt;
    float firstFloat,secondFloat;

    cout<<"输入两个字符：";
    cin>>firstChar>>secondChar;
	// 交换两个字符变量的内容
    swaps(firstChar,secondChar);
    cout<<firstChar<<"  "<<secondChar<<endl;

    cout<<"输入两个整数：";
    cin>>firstInt>>secondInt;
	// 交换两个整形变量的内容
    swaps(firstInt,secondInt);
    cout<<firstInt<<"  "<<secondInt<<endl;

    cout<<"输入两个浮点数： ";
    cin>>firstFloat>>secondFloat;
    // 交换两个浮点类型变量的内容
    swaps(firstFloat,secondFloat);
    cout<<firstFloat<<"  "<<secondFloat<<endl;

    return 0;    
}
