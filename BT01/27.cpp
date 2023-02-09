#include <iostream>
using namespace std;
int main()
{
    bool check=true;
    int n;
    while (check)
    {
        cin >> n;
        if (n>=0&&n%5==0) cout<<n/5<<endl;
        else
        {
            cout<<-1<<"\nBye.";
            break;
        }
    }
}
