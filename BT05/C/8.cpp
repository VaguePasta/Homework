#include <iostream>
#include <cmath>
using namespace std;
int roundingwithlib(double a)
{
    if (a-floor(a)<0.5) return floor(a);
    if (a-floor(a)>=0.5) return ceil(a);
}
int roundingwithoutlib(double a)
{
    if (a-int(a)<0.5) return int(a);
    if (a-int(a)>=0.5) return int(a)+1;
}
int main()
{
    double a;
    cin >> a;
    cout<<roundingwithlib(a)<<endl;
    cout<<roundingwithoutlib(a);
}
