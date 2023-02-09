#include <iostream>
#include <string>
using namespace std;
string fibonacci(int n)
{
    if (n==1) return "a";
    if (n==2) return "b";
    else return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    cout<<fibonacci(10);
}
