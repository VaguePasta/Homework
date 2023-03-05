#include <iostream>
using namespace std;
void ThamChieu(int &a)
{
    cout<<&a<<endl;
}
int main()
{
    int a=6,c=7;
    //int &b;  //Lỗi not initialized
    int &b=a;
    cout<<&a<<endl;
    cout<<&b<<endl;
    ThamChieu(a);
    //&b=c;  //Lỗi
    cout<<&b<<endl;
}
//Biến tham chiếu và biến nó chiếu tới chỉ là 1 biến trong bộ nhớ
//Khai báo 1 tham chiếu phải khởi tạo bằng cách chiếu tới 1 biến thường khi khai báo
//Không thể thay đổi tham chiếu sau khi khởi tạo
