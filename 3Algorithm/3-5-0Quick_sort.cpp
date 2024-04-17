#include<iostream>
using namespace std;

int partition(int array[], int left, int right){
    if(left < right){
        int pivot = array[left];
        int i = left;
        int j = right;
        while (i<j){
            while (i<j && array[j]>=pivot)
            {
                j--;
            }
            while (i<j && array[i]>=pivot)
            {
                i++;
            }
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        
        } 
        array[left] = array[i];
        array[i] = pivot;
        return i;
    }
}

void Quick_sort(int array[], int left, int right){
    if(left < right){
        int pivot_index = partition(array, left, right);
        Quick_sort(array,left ,pivot_index-1);
        Quick_sort(array,pivot_index+1,right );
    }
}