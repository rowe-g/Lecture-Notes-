#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

int main()
{
	int a[10];
	srand(time(NULL));
	for(auto &i:a)
		i=rand()%100;
	cout<<"before sort:"<<endl;		
	for(auto i:a)
		cout<<i<<" ";
	
	//按照个位数升序排列
	sort(a,a+10,[](int a,int b){ return a%10<b%10; });
	
	cout<<"\nafter sort:"<<endl;	
	for(auto i:a)
		cout<<i<<" ";
	return 0;
}