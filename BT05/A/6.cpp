#include <iostream>
#include <cmath>
#include <chrono>
using namespace std;
int BinarySearchIteration(int a[],int n,int key)
{
    float l=0;
    float r=n-1;
    while (l<=r)
    {
        int m=floor((l+r)/2);
        if (a[m]<key) l=m+1;
        else if (a[m]>key) r=m-1;
        else return m;
    }
    return -1;
}
int BinarySearchRecursion(int a[],int l, int r,int key)
{
    if (l<=r)
    {
        int m=(l+r)/2;
        if (a[m]==key) return m;
        if (a[m]>key) return BinarySearchRecursion(a,l,m-1,key);
        if (a[m]<key) return BinarySearchRecursion(a,m+1,r,key);
    }
    else return -1;
}
int main()
{
    int a[16]={1,2,3,5,7,9,11,21,23,27,31,33,34,35,40,58};
    int n=16;
    cout<<BinarySearchIteration(a,n,1)<<endl;
    cout<<BinarySearchRecursion(a,0,n-1,1)<<endl<<endl;
    cout<<BinarySearchIteration(a,n,58)<<endl;
    cout<<BinarySearchRecursion(a,0,n-1,58)<<endl<<endl;
    cout<<BinarySearchIteration(a,n,21)<<endl;
    cout<<BinarySearchRecursion(a,0,n-1,21)<<endl<<endl;
    cout<<BinarySearchIteration(a,n,44)<<endl;
    cout<<BinarySearchRecursion(a,0,n-1,44)<<endl<<endl;
}
//Dùng vòng lặp nhanh hơn đệ quy
