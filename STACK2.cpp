#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

struct Node* top;
    
void push(int data)
{
    struct Node* temp;
    temp = new Node();
    //if stack(heap) is full.
    //Then inserting an elemenyt would 
    //lead to stack overflow
    if(!temp)
    {
        cout<<"\nHeap Overflow";
        exit(1);
    }
    temp -> data = data;
    temp -> next = top;
    top = temp;
}

//check if stack is empty or not
int STACK_ERROR()
{
    return top == NULL;
}

//display the element at top
int display_top()
{
    if(!STACK_ERROR())
        return top->data;
    else
        exit(1);
}

//pop top element
void pop()
{
    struct Node* temp;
    if(STACK_ERROR())
    {
        cout<<"\nStack Underflow"<<endl;
        exit(1);
    }
    else
    {
        temp = top;
        top = top -> next;
        temp -> next = NULL;
        free(temp);
    }
}

//print the entire stack
void display()
{
    struct Node* temp;
    if(STACK_ERROR())
    {
        cout<<"\nStack Underflow";
        exit(1);
    }
    else
    {
        temp = top;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp = temp -> next;
        }
    }
}

int main()
{
    //push into stack
    push(1);
    push(2);
    push(3);
    push(4);
    //display the stack
    display();
    cout<<"\nTop element is "<<display_top()<<endl;
    pop();
    pop();
    display();
    cout<<"\nTop element is "<<display_top()<<endl;
    pop();
    display();
    pop();
    pop(); //error
    return 0;
}