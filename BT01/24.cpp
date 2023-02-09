#include <iostream>
using namespace std;
int main()
{
    int ngay,thang,nam;
    cin >> ngay >> thang >> nam;
    int y=nam-(14-thang)/12;
    int x=y+y/4-y/100+y/400;
    int z=thang+12*((14-thang)/12)-2;
    int thu=(ngay+x+31*z/12)%7;
    switch (thu)
    {
    case 0:
        cout << "Sunday";
        break;
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    }
}
