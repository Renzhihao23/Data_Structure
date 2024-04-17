#include<iostream>
using namespace std;

void Insertion_sort(int array[],int size){
    for (int i = 0; i < size-1; i++)
    {
        int Key = array[i];
        int j = i - 1;
        while (j>=0 && Key < array[j])
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = Key;
    }
    
}

int main(void){
    int array[] = {2, 3,5,6,2,1,4};
    int size = sizeof(array)/sizeof(array[0]);
    Insertion_sort(array, size);
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " "; 
    }
    
    return 0;
}