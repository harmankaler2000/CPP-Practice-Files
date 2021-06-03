#include<iostream>
#include<list>
using namespace std;
struct node
{
    char data;
    node* next;
};

void printlist(node* n)
{
   for(int i=0;i<10;i++)
   {
       cout<<n->data<<" ";
       n=n->next;
   }
}

void reverse_List(node * n)
{
    /*
    char arr[10];
    for(int i=0;i<10;i++)
   {
       arr[i]=n->data;
       n=n->next;
   }
   node* head1 = new node;
   node* temp1 = new node;
   head1->data=arr[9];
   head1->next=NULL;
   for(int i=8;i>=0;i--)
   {
       if(i==8)
       {
           temp1->data=arr[i];
           head1->next=temp1;
           temp1->next=NULL;
       }
       else
       {
           node* temp2 = new node;
           temp2->data=arr[i];
           temp1->next=temp2;
           temp1=temp2;
       }
   }
   cout<<"\n reverse is: "<<endl;
   printlist(head1);
   */
  list<char> l;
    for(int i=0;i<10;i++)
   {
       l.push_back(n->data);
       n=n->next;
   }
   cout<<"\nThe reversed list is: "<<endl;
   l.reverse();
   for(auto i = l.begin();i!=l.end();i++)
    cout<<*i<<" ";

}



int main()
{
    int n=10;
    cout<<"Enter the linked list elements: \n";
    node* head = new node;
    node* temp = new node;
    char in;
    cin>>in;
    head->data=in;
    head->next=NULL;
    for(int i=2;i<=n;i++)
    {
        if(head->next==NULL)
        {
            cin>>in;
            temp->data=in;
            head->next=temp;
        }
        else
        {
            cin>>in;
            node* temp1 = new node;
            temp1->data=in;
            temp->next=temp1;
            temp=temp1;
        }
    }
    printlist(head);
    reverse_List(head);
}