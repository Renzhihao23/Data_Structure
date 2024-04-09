//输出自然数a和b之间的素数
#include<iostream>
using namespace std;

bool Pri(int n){
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i < n; i++){
        if (n%i == 0)
        {
            return false;
        }
    }
    return true;
    
    
}

int main(void){
    cout << "Please enter two natural number" << endl;
    int a, b;
    cin >> a >> b;
    for (int i = min(a, b); i <= max(a, b); i++)
    {
        if (Pri(i) == true)
        {
            cout << i << " " ;
        }
        
    }
    
    return 0;
}