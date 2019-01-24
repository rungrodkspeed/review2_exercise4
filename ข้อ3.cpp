#include<iostream>
#include<cmath>
using namespace std;

double findKineticEnergy(double m, double v){
    return 0.5*m*pow(v,2);
}

int main()
{
    double m,v;
    cout << "put mass:";
    cin >>m;
    cout << "put velocity:";
    cin >>v;
    cout << "E = " << findKineticEnergy(m,v);
    return 0;
}