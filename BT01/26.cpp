#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin >> n;
    int *a=new int[n];
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
        sum+=a[i];
    }
    cout << sum*1.0/n << endl;
    int max=a[0], min=a[0];
    for (int i=0;i<n;i++)
    {
        if (a[i]>max) max=a[i];
        if (a[i]<min) min=a[i];
    }
    cout << max << endl << min;
}
