#include<iostream>
using namespace std;

//factorial algorithm 阶乘算法 求e的值，e=1+1/1!+1/2!+1/3!+1/4!+.....最后一项小于1e-6.
double fact(double i)
{
    if (i == 1)
    {
        return i;
    }
    return i * fact(i - 1);
    
}

int main(void)
{

    int i = 1;
    double sum = 1.0;
    while (1/fact(i) >= 1e-6 )
    {
        sum = sum + 1/fact(i);
        i++;
    }
    
    cout << sum << endl;
    return 0;
}