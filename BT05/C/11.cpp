#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string DecimalToBinary(int n)
{
    string s;
    while (n>0)
    {
        s.insert(0,to_string(n%2));
        n/=2;
    }
    return s;
}
string BinaryToDecimal(string s)
{
    int n=0;
    for (int i=s.length()-1;i>=0;i--)
    {
        n+=(s[i]-'0')*pow(2,s.length()-1-i);
    }
    return to_string(n);
}
int main()
{
    int n;
    cin >> n;
    cout<<DecimalToBinary(n)<<endl;
    string s;
    cin >> s;
    cout<<BinaryToDecimal(s);
}
