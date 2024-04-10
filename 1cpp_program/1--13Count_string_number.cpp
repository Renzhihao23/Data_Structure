//定义一个计算字符串有效长度的函数int MyStrlen(char *str),其功能是统计字符串中的英文字符的个数.(2017)
#include <iostream>
#include <string>
using namespace std;

int CountLetters(const string &str){
//范围 for 循环来遍历字符串的每个字符。这里的for(char c:str)就是定义一个遍历字符c，让它分别等于字符串数组str里面的各个字符，然后执行下面的语句，当c被赋值为str里面所有字符各一次后，就会退出这个循环。
//1.避免复制：由于str是一个引用，所以当CountLetters函数被调用时，不会创建str的副本。这使得传递大型对象（如较长的字符串）到函数中时更加高效。
//2.只读访问：const关键字指明了你不能通过这个引用修改对象。这对于确保函数不会意外地更改其接收到的数据很有用。在CountLetters函数中，这意味着你可以遍历字符串并计数字母，但不能更改字符串中的字符。
    int count = 0;
    for (char c : str) { 
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            count++;
        }
    }
    return count;
}

int main(){
    string str;
    getline(cin, str);
    int number = CountLetters(str);
    cout << number;
    return 0;
}
