#include<iostream>
using namespace std;
void selection_sort(int array[], int size){
    for (int i = 0; i < size - 1; i++)
    {
        int min_index = i;
        for (int  j = i+1; j < size; j++)
        {
            if (array[j] < array[min_index])
            {   
                min_index = j;/* code */
            }
        }
        int temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }
    
}
int main(void){
    int array[] = {2, 3,5,6,2,1,4};
    int size = sizeof(array)/sizeof(array[0]);
    selection_sort(array, size);
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " "; 
    }
    
    return 0;
}