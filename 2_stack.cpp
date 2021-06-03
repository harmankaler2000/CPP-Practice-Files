#include<iostream>
#include<stack>
using namespace std;


void enqueue(stack<int> s1,int element)
{
    s1.push(element);
}

stack<int> dequeue(stack<int> s1, stack<int> s2)
{
    if(s2.size() == 0)
    {
        if(s1.size() == 0)
        {
            cout<<"Cannot dequeue because queue is empty";
        }
        while(s1.size() > 0)
        {
            int a = s1.top();
            s1.pop();
            s2.push(a);
        }
    }
    return s2;
}
int main()
{
    stack<int> s1,s2;
}