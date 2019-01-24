#include<iostream>
#include<cmath>
using namespace std;

double findValueY(double x){
    double degree;
    degree = pow(x,3)*3.1416/180;
    return sin(degree)/log((2*x+1)/pow(x,2));
}

int main()
{
    double x;
    cout << "put x:";
    cin >> x;
    cout << findValueY(x);
    return 0;
}