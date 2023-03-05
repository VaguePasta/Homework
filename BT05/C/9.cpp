#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    srand(time(NULL));
    cout<<rand()%a;
}
