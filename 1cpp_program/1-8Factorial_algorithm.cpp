#include<iostream>
using namespace std;

//factorial algorithm
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