#include <iostream>
using namespace std;
int main()
{
    int n,current;
    cin >> n;
    int** a=new int*[n];
    for (int i=0;i<n;i++)
    {
        a[i]=new int[n];
    }
    for (int i=1;i<=n;i++)
    {
        current=i;
        for (int j=1;j<=n;j++)
        {
            a[i-1][j-1]=current;
            current++;
            if (current>n) current=1;
            cout<<a[i-1][j-1]<<" ";
        }
        cout<<endl;
    }
}
