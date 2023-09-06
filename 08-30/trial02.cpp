#include<iostream>
#include<iomanip>
#include<cmath>
#include<math.h>
using namespace std;

double pi(int n) {
    double sum = 0.0;
    int sign = 1;
    for (int i = 0; i < n; ++i) {           
        sum += sign/(2.0*i+1.0);
        sign *= -1;
    }
    return sum;
    cout<<sum;
}