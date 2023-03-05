#include <iostream>
#include <string>
using namespace std;
void ArrayPass(int a[])
{
    cout<<(void*)&a[0]<<endl;
}
void StringPass(string s)
{
    cout<<&s<<endl;
}
int main()
{
    int a[1]={0};
    string s="s";
    cout<<&a<<endl;
    cout<<&s<<endl<<endl;
    ArrayPass(a);
    StringPass(s);
}
//Mảng được truyền tham chiếu, string được truyền tham trị
