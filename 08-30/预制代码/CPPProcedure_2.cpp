/**
从键盘输入弧度值x，求sin(x)

已知sin(x)的近似通项公式如下：
sin(x)= x - x^3/3! + x^5/5! - x^7/7! + ... + (-1)^(n-1)x^(2n-1)/(2n-1)!

或者递推公式如下：
sin(x)=item(1)+item(2)+item(3)+......+item(n)
item(1)=x;
item(n)=-item(n-1)*x*x/((2*n-2)*(2*n-1))
 其中x为弧度，n为正整数。要求精度满足1e-7
 **/
#include <iostream>
#include <cmath>
using namespace std;
 
const int PI=3.1415926;

int main()
{
	int n;
	double x,temp,sinx,item;
	
	cin>>x;
	temp=x;
	x=fmod(x,2*PI);
	item=x;
	n=1;
	sinx=0;
	while(fabs(item)>=1e-7)
	{
		sinx+=item;
		n++;
		item=-item*x*x/((2*n-2)*(2*n-1));
	}

	cout.precision(7);
	cout.setf(ios::fixed | ios::showpoint);
	cout<<"sin("<<temp<<")="<<sinx<<endl;
	cout<<sin(temp)<<endl;
	return 0;
}