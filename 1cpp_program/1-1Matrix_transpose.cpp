//输入一个 n 行 m 列的矩阵 A，输出它的转置 A^T。
#include<iostream>
using namespace std;
#define n 4
#define m 3
int main(){
	int a[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		cin>>a[i][j];
	for(int i=0;i<m;i++){//此处输出应该是m行n列
		for(int j=0;j<n;j++)
		{cout<<a[j][i]<<" ";}
		cout<<endl;}
}