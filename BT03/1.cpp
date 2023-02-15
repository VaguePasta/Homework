#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *a=new int[n];
    int *b=new int[n];
    int b_length=0;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<b_length;j++)
        {
            if (b[j]==a[i])
            {
                cout<<"Yes";
                return 0;
            }
        }
        b[b_length]=a[i];
        b_length++;
    }
    cout<<"No";
}
