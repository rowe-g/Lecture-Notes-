#include <iostream>
using namespace std;

int main()
{
    void(* x)() = [ ]{
		cout<<"hello world"<<endl;
	};
	x();
	return 0;
}