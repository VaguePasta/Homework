#include <iostream>
#include <string>
using namespace std;
int main()
{
   int a,b;
   cin >> a >> b;
   int countf=0;
   for (int i=a;i<=b;i++)
   {
       bool test=true;
       string s=to_string(i);
       for (int j=0;j<=s.length()/2;j++)
        {
            if (s[j]!=s[s.length()-j-1])
            {
                test=false;
                break;
            }
        }
        if (test) countf++;
   }
   cout<<countf<<endl;
}
