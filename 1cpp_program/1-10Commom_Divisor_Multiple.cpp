//Greatest Common Divisor and Least Common Multiple
#include<iostream>
using namespace std;

int Max(int a, int b){
    if (a < b) return b;
    return a; 
}
int Min(int a, int b){
    if (a < b) return a;
    return b; 
}

void Func(int a, int b){
    int Arr1[20];
    int count1 = 0;
    int Max_Common_Divisor;
    int Min_Common_Multiple;
    for (int i = 1; i < Min(a, b); i++){
        if (a%i == 0 && b%i == 0 ){
            Arr1[count1] = i;
            ++count1;
        }  
    }

    for (int i = 1; i < count1; i++){
        Max_Common_Divisor = Max(Arr1[0], Arr1[i]);
    }
    Min_Common_Multiple = (a/Max_Common_Divisor)*b;
    cout << Max_Common_Divisor<< " " << Min_Common_Multiple;

}
// int gcd(int m,int n) {
// 	if(m>n)return gcd(n,m);
// 	for(int i=m;0<i;i--)
// 		if(m%i==0&&n%i==0)
// 		{
// 			cout<<"最大公约数"<<i<<endl;
// 			cout<<"最小公倍数"<<(m/i)*n;
// 			break;
// 			}
// 			return 0;
// }


int main(void)
{
    cout << "Please enter your integer A and B " << endl;
    int a, b;
    cin >> a >> b;
    Func(abs(a), abs(b));
    return 0;
}