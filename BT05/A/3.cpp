#include <iostream>
using namespace std;
void check1(int a,int b)
{
    cout<<&a<<" "<<&b<<endl;
}
void check2(int &a,int &b)
{
    cout<<&a<<" "<<&b<<endl;
}
int main()
{
    int a=0,b=0;
    cout<<&a<<" "<<&b<<endl;
    check1(a,b);
    check2(a,b);
    return 0;
}
//Hàm truyền bằng tham chiếu trả về địa chỉ bằng địa chỉ của a,b trong main còn hàm truyền bằng tham trị trả về địa chỉ khác với địa chỉ của a,b trong main
