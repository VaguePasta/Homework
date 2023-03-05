#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    if (a==0) return b;
    else return gcd(b%a,a);
}
int main()
{
    int a,b;
    cin >> a >> b;
    if (gcd(a,b)==1) cout<<"Nguyen to cung nhau\n";
    else cout<<"Khong nguyen to cung nhau\n";
}
