#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string *s=new string[n];
    for (int i=0;i<n;i++) cin >> s[i];
    for (int i=0;i<n;i++)
    {
        string temp;
        for (int j=s[i].length()-1;j>=0;j--)
        {
            temp+=s[i][j];
        }
        for (int k=0;k<n;k++)
        {
            if (s[k]==temp)
            {
                cout<<s[k].length()<<" "<<s[k][s[k].length()/2]<<endl;
                return 0;
            }
        }
    }
}
