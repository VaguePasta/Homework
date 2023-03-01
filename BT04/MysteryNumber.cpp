#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *a=new int[n];
    int *b=new int[n+1];
    for (int i=0;i<n;i++) cin >> a[i];
    for (int i=0;i<n+1;i++) cin >> b[i];
    for (int i=0;i<n+1;i++)
    {
        bool check=false;
        for (int j=0;j<n;j++)
        {
            if (b[i]==a[j])
                {
                    check=true;
                    break;
                }
        }
        if (!check)
        {
            cout<<b[i];
            return 0;
        }
    }
}
