#include <iostream>
#include <string>
using namespace std;
string number(char n)
{
    switch(n)
    {
        case '0': return "";
        case '1': return "one";
        case '2': return "two";
        case '3': return "three";
        case '4': return "four";
        case '5': return "five";
        case '6': return "six";
        case '7': return "seven";
        case '8': return "eight";
        case '9': return "nine";
        default: return "";
    }
};
string rankc(int current,char n)
{
    if (n!='0')
    switch (current)
    {
        case 2 : return " hundred ";
        case 3 : return " thousand ";
        case 5 : return " hundred ";
        case 6 : return " million ";
        case 8 : return " hundred ";
        default: return "";
    }
    return "";
}
string _ty(char n)
{
    switch (n)
    {
        case '2': return "twenty";
        case '3': return "thirty";
        case '4': return "forty";
        case '5': return "fifty";
        case '6': return "thirty";
        case '7': return "seventy";
        case '8': return "eighty";
        case '9': return "ninety";
        default: return "";
    }
}
string one_s(string n)
{
    if (n=="10") return "ten";
    if (n=="11") return "eleven";
    if (n=="12") return "twelve";
    if (n=="13") return "thirteen";
    if (n=="14") return "fourteen";
    if (n=="15") return "fifteen";
    if (n=="16") return "sixteen";
    if (n=="17") return "seventeen";
    if (n=="18") return "eighteen";
    if (n=="19") return "nineteen";
    return "";
}
int main()
{
    string s="";
    string n;
    cin >> n;
    if (n[0]=='-')
    {
        s=+"negative ";
        n.erase(0,1);
    }
    unsigned int current=0;
    bool ty;
    while (current<n.length())
    {
            if (n.length()-1-current==1||n.length()-1-current==4||n.length()-1-current==7)
            {
                if (n[current]!='0') ty=true;
                if (n[current]!='1') {s+=_ty(n[current]);current++;}
                else
                {
                    string temp="";
                    temp+=n[current];
                    temp+=n[current+1];
                    s+=one_s(temp);
                    s+=rankc(n.length()-2-current,n[current]);
                    current+=2;
                    ty=false;
                }
            }
                if (ty==true)
                {
                    if (n[current]!='0') s+="-";
                    else s+=" ";
                    ty=false;
                }
                s+=(number(n[current])+rankc(n.length()-1-current,n[current]));
        current++;
    }
    cout<<s;
    return 0;
}
