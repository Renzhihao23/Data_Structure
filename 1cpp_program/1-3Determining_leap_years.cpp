//输入一个年份判断是否是闰年。
#include <iostream>
using namespace std;
int main() {
	int year;
	cin >> year;
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		cout << year << "是闰年!";
	}
	else {
		cout << year << "不是闰年!";
	}
}