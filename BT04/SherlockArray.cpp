#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i=0;i<test;i++)
    {
        int n;
        cin >> n;
        int *a=new int[n];
        bool check=false;
        for (int i=0;i<n;i++) cin >> a[i];
        for (int i=0;i<n;i++)
        {
            int leftsum=0,rightsum=0;
            for (int j=0;j<i;j++)
            {
                leftsum+=a[j];
            }
            for (int j=i+1;j<n;j++)
            {
                rightsum+=a[j];
            }
            if (leftsum==rightsum)
            {
                check=true;
                break;
            }
        }
        if (check) cout<<"YES\n"; else cout<<"NO\n";
        delete []a;
    }
}
