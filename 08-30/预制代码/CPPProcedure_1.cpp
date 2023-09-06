/**
	从键盘输入两个正整数，找出它们之间（含）的所有素数
**/
#include <iostream>	//包含输入输出流头文件
#include <cmath>	//包含数学函数头文件
using namespace std;	//默认使用名字空间std

//判断整数n是否为素数
bool isPrime(int n)	//bool是基本数据类型，表示布尔值
{
	int root=sqrt(n);	//将n的平方根赋值给root
	for(int i=2;i<=root;i++)
		if(n%i==0)	//如果发生整除
			return false;	//函数调用结束，返回false
	return true;	//函数调用结束，返回true
}

int main()	//主函数，程序的入口
{
	int a,b,i;
	
	cin>>a>>b;	//从键盘输入两个整数分别赋值给a、b
	for(i=a;i<=b;i++)
	{		
		if(isPrime(i))	//判断i是否是素数
			cout<<i<<endl;	//输出i值和换行符
	}
	
	return 0;	//返回0值给操作系统，表示程序正常退出
}