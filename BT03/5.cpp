#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int m,n;
    cin >> m >> n;
    int **a=new int*[m];
    for (int i=0;i<m;i++) a[i]=new int [n];
    int top = 0, bottom = m - 1, left = 0, right = n - 1;
    int d = 1;
    int current=1;
    //
    // d 1: -> 2:Tren xuong duoi  3:<-  4: Duoi len tren
    while (top <= bottom && left <= right)
    {
        if (d == 1)
        {
            for (int i = left; i <= right; i++)
            {
                a[top][i]=current++;
            }
            top++;
            d = 2;
        }
        else if (d == 2)
        {
            for (int i = top; i <= bottom; i++)
            {
                a[i][right]=current++;
            }
            right--;
            d = 3;
        }
        else if (d == 3)
        {
            for (int i = right; i >= left; i--)
            {
                a[bottom][i]=current++;
            }
            bottom--;
            d = 4;
        }
        else if (d == 4)
        {
            for (int i = bottom; i >= top; i--)
            {
                a[i][left]=current++;
            }
            left++;
            d = 1;
        }
    }
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<setw(2);
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
