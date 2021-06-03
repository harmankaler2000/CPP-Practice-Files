#include<iostream>
#include<vector>
#include<cassert>
using namespace std;

int choose_k(int n, int k)
{
    assert(n>0);
    assert(k>=0);
    assert(n>=k);

    if(n==k || k == 0)
        return 1;
    return choose_k(n-1,k) + choose_k(n-1,k-1);
}
int index(const string& str)
{
    int length = str.size();
    //check if input is valid 
    if(length<1) 
        return 0;
    //check string validity
    for(int i = 1; i<length; ++i)
    {
        //invalid in case
        //if string contains any character return
        if(str[i]<'a' || str[i]>'z')
            return 0;
        if(str[i-1]<'a' || str[i-1]>'z')
            return 0;
        //if the string is not in ascending order of character
        if(str[i]<=str[i-1])
            return 0;
    }
    //count the no of strings before string the size
    int index = 0;
    for(int i=1; i<length;i++)
    {
        //chose char between the alphabet
        index += choose_k(26,i);
    }

    //strings of the same length 
    char start;
    for(int i=0;i<length;i++)
    {
        if(i==0)
            start = 'a';
        else
            start = str[i-1] + 1;
        for(int j=start;j<str[i];++j)
        {
            index += choose_k('z'-j,str.size()-i-1);
        }
    }
    index++; //count the entered string
    return index;
}

int main()
{
    //test cases
    int result;
    result = index("ab");       // Expect 27
    cout<<"index is: "<<result<<endl;
    result = index("ba");       // Expect 0
    cout<<"index is: "<<result<<endl;
    result = index("bc");       // Expect 52
    cout<<"index is: "<<result<<endl;
    result = index("aez");      // Expect 441
    cout<<"index is: "<<result<<endl;
    result = index("cde");      // Expect 928
    cout<<"index is: "<<result<<endl;
    result = index("cdb");      // Expect 0
    cout<<"index is: "<<result<<endl;
    result = index("cdf");      // Expect 929
    cout<<"index is: "<<result<<endl;
    result = index("moqx");     // Expect 16983
    cout<<"index is: "<<result<<endl;
    result = index("xyz");      // Expect 2951
    cout<<"index is: "<<result<<endl;
    result = index("hjmoqsu");  // Expect 930152
    cout<<"index is: "<<result<<endl;
}