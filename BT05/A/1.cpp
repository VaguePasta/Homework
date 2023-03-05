#include <iostream>
using namespace std;
int main()
{
    int d=2;
    int a[3]={3,5,5};
    char b[3]={'a','b','c'};
    int e=2;
    cout<<&d<<endl;
    cout<<(void*)&a[1]<<" "<<(void*)&a[2]<<" "<<(void*)&a[3]<<endl;
    cout<<(void*)&b[1]<<" "<<(void*)&b[2]<<" "<<(void*)&b[3]<<endl;
    cout<<&e<<endl;
    //Các biến trong mảng cách nhau 1 đoạn bằng với độ lớn của phần tử trong bộ nhớ
}
