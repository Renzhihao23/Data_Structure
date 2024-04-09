//有一分数序列：2/1,3/2,5/3,8/5,13/8,21/13....请编写程序，输入N，求出这个数列的前N项之和。
#include<iostream>
#include <iomanip>
using namespace std;
#define T 100
int main(void){
    double n, Arr[T];    //double /  double = xiao shu
    cin >> n; 
    double sum = 0.0;
    Arr[0] = 1;
    Arr[1] = 2;
    for (int i = 2; i <= n; i++)
    {
        Arr[i] = Arr[i-1] + Arr[i-2];
        cout << Arr[i] << " ";
    }
    cout << endl;
    for (int j = 0; j < n; j++)
    {
        sum = sum + (Arr[j+1]/Arr[j]) ;
    }
    cout<<sum<<endl;
    return 0;
}