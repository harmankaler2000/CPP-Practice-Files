#include<bits/stdc++.h>
using namespace std;

int precedence(char c)
{
    switch (c)
    {
    case '^': return 3;
    case '*': return 2;
    case '/': return 2;
    case '+': return 1;
    case '-': return 1;
    default: return -1; 
    }
}

void inpost(string s)
{
    stack<char> a;
    a.push('N');
    int l = s.length();
    string ns;
    for(int i = 0; i<l;i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
            ns += s[i];
        
        //if the scanned character is an '(' push it in the stack
        else if (s[i] == '(')
            a.push('(');
        //if scanned character is an ')' pop to
        //output string from the stack unti '(' is found
        else if(s[i] == ')')
        {
            while(a.top()!='N' && a.top()!='(')
            {
                char c = a.top();
                a.pop();
                ns += c;
            }
            if(a.top() == '(')
            {
                char c = a.top();
                a.pop();
            }
        }
        //operand is scanned
        else
        {
            while(a.top() != 'N' && precedence(s[i]) <= precedence(a.top()))
            {
                char c = a.top();
                a.pop();
                ns += c;
            }
            a.push(s[i]);
        }
    }
    //pop all remaining element
    while(a.top()!='N')
    {
        char c = a.top();
        a.pop();
        ns += c;
    }
    cout<<ns<<endl;
}

int main()
{
    string exp = "A+B";
    inpost(exp);
    return 0;
}