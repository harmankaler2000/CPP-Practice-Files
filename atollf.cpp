#include<iostream>
using namespace std;

int main()
{
    //atol
    char str[] = "123456789";
    long int num1 = atol(str);
    cout<<"Number is: "<<num1<<"\n";
    char str2[] = "100000002 0"; //with spaces
    long int num2 = atol(str2);
    cout<<"Number is: "<<num2<<"\n";

    //atoll
    char big1[] = "3477864824986543279";
    long long int num3 = atoll(big1);
    cout<<"Number is: "<<num3<<"\n";
    char big2[] = "1034834 343432 3473847";
    long long int num4 = atoll(big2);
    cout<<"Number is: "<<num4<<"\n";

    //atof
    char pi[] = "3.4723486238746";
    double pi_value = atof(pi);
    cout<<"Value of pi is: "<<pi_value<<"\n";
    char a[] = "9.8";
    double acc = atof(a);
    cout<<"Value is: "<<acc<<"\n";

    //swap
    int a1 = 10;
    int a2 = 20;
    cout<<"a1 before: "<<a1<<"\n";
    cout<<"a2 before: "<<a2<<"\n";
    swap(a1,a2);
    cout<<"a1 after: "<<a1<<"\n";
    cout<<"a2 after: "<<a2<<"\n";
    return 0;
}