#include<iostream>
using namespace std;
//给定一个n个元素的整数数组A，A中连续的相等元素所形成的数据区域称为块，求最大块的长度。
int main(void)
{
    int sum = 0;
    int Maxsum = 1;
    int Array[10] = {1,2,3,5,6,7,7,7,7,7};
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (Array[i] == Array[j])
            {
                sum++;
            }
            
        }
        
        if (Maxsum<sum)
        {
            Maxsum = sum;
        }
        sum = 0;
    }
    cout << "the larges of maxblock:" << Maxsum << endl; 
    return 0;
}