#include<bits/stdc++.h>
using namespace std;

class stacks
{
    int* arr;
    int size;
    int top1, top2;
    
    public:
        stacks(int n)
        {
            size = n;
            arr = new int[n];
            top1 = -1;
            top2 = size;
        }

        void push1(int x)
        {
            if(top1 < top2 - 1)
            {
                top1++;
                arr[top1] = x;
            }
            else
            {
                cout<<"Stack overflow\n";
                exit(1);
            }
        }

        void push2(int x)
        {
            if(top1 < top2 - 1)
            {
                top2--;
                arr[top2] = x;
            }
            else
            {
                cout<<"Stack overflow\n";
                exit(1);
            }
        }

        int pop1()
        {
            if(top1 >= 0)
            {
                int x = arr[top1];
                top1--;
                return x;
            }
            else
            {
                cout<<"Stack underflow\n";
                exit(1);
            }
        }
        int pop2()
        {
            if(top2 < size)
            {
                int x = arr[top2];
                top2++;
                return x;
            }
            else
            {
                cout<<"Stack underflow\n";
                exit(1);
            }
        }
};

int main()
{
    stacks s(5);
    s.push1(5);
    s.push2(10);
    s.push2(15);
    s.push1(11);
    s.push2(7);
    cout<<"pop from stack 1: "<<s.pop1();
    s.push2(40);
    cout<<"\nPop from stack 2 is: "<<s.pop2();
    return 0;
}