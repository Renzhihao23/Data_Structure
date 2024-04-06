//输入一个字符串，内有数字和非数字字符，如xy12ab935786$,连续的数字成为一个整数。例如以上12，93，5786.统计字符串中多少个整数，并依次输出
#include<iostream>
#include<string>
using namespace std;


int main(void)
{
    cout << "Please enter string,the string less than 30 " << endl;
    string Str;
	int count=0;
	getline(cin,Str);


	for(int i=0;i<Str.length();i++)
    {
		if(Str[i]<='9'&&Str[i]>='0')
        {
			while(Str[i]>='0'&&Str[i]<='9')
			{
                cout<<Str[i];i++;
            }
			cout<<" ";
			++count;
		}
	}
    cout <<endl;
	cout<< "Count = " << count;
    

}