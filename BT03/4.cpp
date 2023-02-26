#include <iostream>=
using namespace std;
int main()
{
    int m,n;
    cin >> m >> n;
    char **a=new char* [m];
    for (int i=0;i<m;i++)
    {
        a[i]=new char[n];
        for (int j=0;j<n;j++) cin >> a[i][j];
    }
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (a[i][j]!='*')
            {
                int countf=0;
                if (i-1>=0&&j-1>=0&&a[i-1][j-1]=='*') countf++;
                if (i-1>=0&&j>=0&&a[i-1][j]=='*') countf++;
                if (i-1>=0&&j+1<n&&a[i-1][j+1]=='*') countf++;
                if (i>=0&&j-1>=0&&a[i][j-1]=='*') countf++;
                if (i>=0&&j>=0&&a[i][j]=='*') countf++;
                if (i>=0&&j+1<n&&a[i][j+1]=='*') countf++;
                if (i+1<m&&j-1>=0&&a[i+1][j-1]=='*') countf++;
                if (i+1<m&&j>=0&&a[i+1][j]=='*') countf++;
                if (i+1<m&&j+1<n&&a[i+1][j+1]=='*') countf++;
                a[i][j]=countf+'0';
            }
        }
    }
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
