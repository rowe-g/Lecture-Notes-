#include <iostream>
using namespace std;

int main()
{
    int x = 6, y = 3;
    int sum = 0;
    sum = [x, y](int z)->int{return x+y+z;}(2);
    cout<<"sum:"<<sum<<endl;
    return 0;
}