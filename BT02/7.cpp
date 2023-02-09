#include <iostream>
using namespace std;
int main()
{
    int n;
    int temp;
    do
    {
        temp=n;
        cin >> n;
        if (n!=temp)
        {
            temp=n;
            cout<<n<<" ";
        }
    } while (n>=0);

}
