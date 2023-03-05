#include <iostream>
#include <cmath>
using namespace std;
int factorial(int n)
{
    if (n==0) return 1;
    else return n*factorial(n-1);
}
int toHop(int k, int n)
{
    return factorial(n)/(factorial(k)*factorial(n-k));
}
int kiemTra(int k, int n)
{
    if (k>=0&&k<=n&&n>=1&&n<=20) return 1;
    else return 0;
}
int main()
{
    int k=0,n=0;
    do
    {
        cin >> k >> n;
        if (kiemTra(k,n)==1) cout<<toHop(k,n)<<endl;
    }while(k!=-1&&n!=-1);
}
