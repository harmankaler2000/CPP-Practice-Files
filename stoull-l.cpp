#include<bits/stdc++.h>
using namespace std;

int main()
{
    //hexadecimal string
    string str = "FF";
    //convert integer
    unsigned long num = stoul(str,nullptr,16);
    //printing the integer
    cout<<num<<"\n";
    string st = "FFFFFF";
    //convert long long
    unsigned long long val = stoull(st,nullptr,16);
    //printing the long long
    cout<<val;
    cout<<endl;
    //program to compare two strings containg hexadecimal values
    //stoul used but in cases of numbers exceeding unsigned long value stoull is used
    string s1 = "4F";
    string s2 = "A0";
    //convert integer
    unsigned long n1 = stoul(s1,nullptr,16);
    unsigned long n2 = stoul(s2,nullptr,16);
    //compare both string
    if(n1 > n2)
        cout<<s1<<" is greater than "<<s2;
    else if(n2>n1)
        cout<<s2<<" is greater than "<<s1;
    else
        cout<<"Both "<<s1<<" and "<<s2<<" are equal ";
    return 0;
}