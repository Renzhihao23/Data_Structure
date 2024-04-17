#include<iostream>
using namespace std;
 
void CountSort(int* a, int n)
{
	int max = a[0];
	int min = a[0];
	for (int i = 0; i < n; ++i)//遍历找打最大值和最小值
	{
		if (a[i] > max)
		{
			max = a[i];
		}
 
		if (a[i] < min)
		{
			min = a[i];
		}
	}
 
	int range = max - min + 1;//计算范围
	//int* tmp = new int[range];//动态开辟  您在数组tmp初始化后没有将其所有元素初始化为0。在C++中，new操作符不会自动清零分配的内存，这与calloc在C中的行为不同。
    int* tmp = new int[range]{}; // 动态开辟并初始化为0
	for (int i = 0; i < n; ++i)//统计数组a每个元素出现的次数
	{
		tmp[a[i] - min]++;
	}
	int j = 0;
	for (int i=0;i<range;++i)//
	{
		while (tmp[i])//判断tmp数组该元素是否有计数。
		{
			a[j++] = i + min;//如果有就把该元素的下标值反映射至数组a
			tmp[i]--;
		}
	}
	//动态开辟的空间，主动释放
	delete[] tmp;
	tmp = NULL;
}
 
//打印
void Print(int* a,int n)
{
	for (int i=0;i<n;++i)
	{
		cout << a[i] << " ";
	}
}
 
int main()
{
	int a[] = {-1,1,2,9,8,8,1,3,4,3,4,5};
	CountSort(a, sizeof(a) / sizeof(a[0]));//计数排序
	Print(a, sizeof(a) / sizeof(a[0]));//打印
	return 0;
}