//用递归算法将一个十进制数 X 转换成任意进制数 M。
#include<iostream>
using namespace std;
	string c="0123456789ABCDEF";
void f(int x,int m){//递归
	if(x/m!=0)
		f(x/m,m);
	cout<<c[x%m];
}
int main(){
	int x,m;
	cin>>x>>m;
	f(x,m);
	return 0;
}