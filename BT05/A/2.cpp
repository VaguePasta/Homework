#include <iostream>
using namespace std;
int factorial(int n)
{
    cout<<"n="<<n<<", &n="<<&n<<endl;
    if (n==0) return 1;
    else return n*factorial(n-1);
}
int main()
{
    cout<<factorial(6)<<endl;
    return 0;
}
//Kích thước stack frame là 16 byte bằng với kích thước của biến int trong bộ nhớ
