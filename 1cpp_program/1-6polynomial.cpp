//求多项式：1 – 1/2 + 1/3 – 1/4 + … + 1/99 – 1/100 的值。
#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
    double sum = 0.0;
    int j = 0;
    for(int i = 0; i < 100; i++)
    {
        sum += 1 / ((i+1) * pow(-1, j++));
    }
    cout << sum << endl;

    system("pause");
    return 0;
}
