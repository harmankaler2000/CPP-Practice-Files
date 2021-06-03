#include<iostream>
#include<queue>
using namespace std;
void show(priority_queue<int> g)
{
    priority_queue<int> q = g;
    while(!q.empty())
    {
        cout<<"\t"<<q.top();
        q.pop();
    }
    cout<<"\n";
}

void showminheap(priority_queue<int,vector<int>,greater<int>> gq)
{
    priority_queue<int,vector<int>,greater<int>> a = gq;
    while(!a.empty())
    {
        cout<<"\t"<<a.top();
        a.pop();
    }
    cout<<"\n";
}
int main()
{
    //max heap
    priority_queue<int> q;
    q.push(10);
    q.push(30);
    q.push(20);
    q.push(5);
    q.push(1);
    cout<<"The priority queue is: "<<endl;
    show(q);
    cout<<"\nSize: "<<q.size();
    cout<<"\nTop: "<<q.top();
    cout<<"\npop: ";
    q.pop();
    show(q);
    //min heap
    priority_queue<int,vector<int>,greater<int>> a;
    a.push(10);
    a.push(30);
    a.push(20);
    a.push(5);
    a.push(1);
    cout<<"The priority queue is: "<<endl;
    showminheap(a);
    cout<<"\nSize: "<<a.size();
    cout<<"\nTop: "<<a.top();
    cout<<"\npop: ";
    a.pop();
    showminheap(a);

    //value_type
    priority_queue<int>::value_type AnInt;
    priority_queue<int> q1;
    AnInt = 20;
    cout<<"Value of AnInt is: "<<AnInt<<endl;
    q1.push(AnInt);
    AnInt = 30;
    q1.push(AnInt);
    cout<<"The value at the top is: "<<q1.top()<<endl; 
    show(q1);
    return 0;
}