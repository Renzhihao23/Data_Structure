#include<iostream>
using namespace std;

void bubble_sort(int *ary, int size){  //int *ary == array 等同于 int* ary == &array[0]
    for (int i = 0; i < size-1; i++){
        for (int j = 0; j < size-i-1; j++){
            if (ary[j] < ary[j+1]){
                //change of position    // Address --- &A[i] or (A + i)
                int temp = ary[j];      // value   --- A[i] or *(A + i)
                ary[j] = ary[j+1];
                ary[j+1] = temp;
            }  
        }    
    }  
}

int main(void){
    int array[] = {1,2,35,6,7};  //   数组名表示整个数组的地址：1.sizeof（数组名）   2.&数组名
    bubble_sort(array, 5);       //   其他情况表示首地址：数组名代表第一个元素地址 array == &array[0]
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
    
}