#include<iostream>
using namespace std;

void Merge(int array[],int tempArr[], int strat, int mid, int end){
    int i = strat, j=mid+1, k = strat;
    while(i!=mid+1 && j!=end+1) {
        if(array[i] > array[j])
            tempArr[k++] = array[j++];
        else
            tempArr[k++] = array[i++];
    }
    while(i != mid+1)
        tempArr[k++] = array[i++];
    while(j != end+1)
        tempArr[k++] = array[j++];
    for(i=strat; i<=end; i++)
        array[i] = tempArr[i];
}
 
//内部使用递归
void MergeSort(int array[], int tempArr[], int strat, int end) {
    int mid;
    if(strat < end) {
        mid = strat + (end-strat) / 2;//避免溢出int
        MergeSort(array, tempArr, strat, mid);
        MergeSort(array, tempArr, mid+1, end);
        Merge(array, tempArr, strat, mid, end);
    }
}
 
int main(int argc, char * argv[]) {
    int a[8] = {50, 10, 20, 30, 70, 40, 80, 60};
    int i, b[8];
    MergeSort(a, b, 0, 7);
    for(i=0; i<8; i++)
    cout << a[i] << " ";
    return 0;
}