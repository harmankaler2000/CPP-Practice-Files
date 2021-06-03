#include<iostream>
using namespace std;
int isPrime(int n)
{
    if(n<=1)
        return 1;
    if(n<=3)
        return 1;
    if(n%2==0)
        return 2;
    if(n%3==0)
        return 3;
    int result=1; //store 1 for all other than 1,2,3
    for(int i=5;i*i<=n;i+=6)
    {
        if(n%i==0)
        {
            result=i; //divisible by i
            break;
        }
        if(n%(i+2)==0)
        {
            result=i+2;//divisible by i+2;
            break;
        }
    }
    return result;
}
int main()
{
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    int res=isPrime(n);
    cout<<"The smallest divisir of the number is : "<<res<<endl;
    return 0;
}