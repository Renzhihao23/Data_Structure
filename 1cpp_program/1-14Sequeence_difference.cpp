//求最大序列差值。序列11,3,5,7,9,2,4,6,8,10的最大增幅为8（在 x=5 ， y=9 时）。
#include<iostream>
#include <cstdlib> // 对于整数的abs
#include <cmath>   // 对于浮点数的abs
using namespace std;

void difference(int array[], int size){
    int diff = 0;
    for (int i = 0; i < size - 2; i++)
    {
       if (diff < abs(array[i] - array[i+1]))
       {
        diff = abs(array[i] - array[i+1]);
       }
    }
    cout << diff;
}
 int main(void){
    int array[] = {11,3,5,7,9,2,4,6,8,10};
    int size = sizeof(array)/sizeof(array[0]);
    difference(array, size);
    return 0;


 }