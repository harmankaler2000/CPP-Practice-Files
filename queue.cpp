#include<iostream>
#include<queue>

using namespace std;

void showq(queue<int> q)
{
    queue<int> g = q;
    while (!g.empty())
    {
        cout<<g.front()<<" ";
        g.pop();
    }
    cout<<endl;
}

int main()
{
    queue<int> g;
    g.push(10);
    g.push(20);
    g.push(30);
    cout<<"The queue is: "<<endl;
    showq(g);
    g.pop();
    showq(g);
    return 0;
}