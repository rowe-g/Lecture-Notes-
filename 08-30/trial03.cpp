/*
设计一个模板函数，使其能求得任意类型（基本数据 类型）的两个相同长度数组的平均值：
参考https://zhidao.baidu.com/question/10683211.html
*/

#include <iostream>
using namespace std;
 
template<class T>
double average(T *src, int len)  
{
    double sum = 0;
    for (int i = 0; i < len; i++)
        sum += src[i];
    return sum / len;
}
 
int main()
{

}