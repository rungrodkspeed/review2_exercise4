#include<iostream>
using namespace std;

int greatDivisor(int x){
    int i=x-1;
    while(i>=1){
        if(x%i==0){
            return i;
        }
        i--;
    }
}

int main()
{
    int a;
    cout << "Enter x:";
    cin >> a;
    cout << greatDivisor(a);
    return 0;
}