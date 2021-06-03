#include<iostream>
#include<vector>

using namespace std;
struct node
{
    int data;
    node* next;
};

void print_List(node* n,int length)
{
    for(int i=0;i<length;i++)
    {
        cout<<n->data<<" ";
        n = n->next;
    }
}

void rev_part_list(node* n,int length)
{
    //convert linked list to vector
    vector<int> linked_list;
    for(int i=0;i<length;i++)
   {
       linked_list.push_back(n->data);
       n=n->next;
   }
   if(linked_list.size()==1)
   {
       cout<<"List with a single element\n";
       cout<<linked_list[0]<<endl;
       return;
   }
   //finding the start index where the list starts to reverse.
   int start_index,last_index;
   for(int i = 0; i<length;i++)
   {
       if(linked_list[i]>linked_list[i+1])
       {
           start_index = i;
           break;
       }
   }
   cout<<"Start index: "<<start_index<<endl;
   int flag = 0;
   for(int i = 0; i<length;i++)
   {
       if(linked_list[i] > linked_list[start_index])
       {
           last_index = i - 1;
           flag = 1;
           break;
       }
   }
   if(flag==0)
   {
       cout<<"The whole list is reversed from the start index\n";
       last_index = length;
   }
   cout<<"End: "<<last_index<<endl;
   vector<int> corrected_list;
   //pushing the sorted elements:
   //if the whole list id reversed
   if(start_index == 0 && last_index == length)
   {
       for (int i = length - 1; i >= start_index; i--)
       {
           corrected_list.push_back(linked_list[i]);
       }
       cout<<"The Corrected list is: \n";
       for(int i=0;i<length;i++)
       {
           cout<<corrected_list[i]<<" ";
       }   
       return;
   }

   //if a part of the list is reversed
   for(int i=0;i<start_index;i++)
   {
       corrected_list.push_back(linked_list[i]);
   } 
   
   //pushing the reversed list
   for(int i = last_index;i>=start_index;i--)
   {
       corrected_list.push_back(linked_list[i]);
   }
   //if there are values left at the end
   for(int i = last_index+1; i<length;i++)
   {
       corrected_list.push_back(linked_list[i]);
   }
   cout<<"The Corrected list is: \n";
   for(int i=0;i<length;i++)
   {
       cout<<corrected_list[i]<<" ";
   }
   return;
}


int main()
{
    int n;
    cout<<"Enter the size of the list: \n";
    cin>>n;
    node* head = new node;
    node* temp = new node;
    cout<<"Enter the lined list: \n";
    int in;
    cin>>in;
    head->data = in;
    head->next= NULL;
    for(int i = 2; i<=n;i++)
    {
        if(head->next==NULL)
        {
            cin>>in;
            temp->data = in;
            head->next=temp;
        }
        else
        {
            cin>>in;
            node* temp1 = new node;
            temp1->data = in;
            temp->next = temp1;
            temp = temp1;
        }
    }
    cout<<"The original List: "<<endl;
    print_List(head,n);
    rev_part_list(head,n);
    //test cases 
    // 1,2,3,4,8,7,6,5,9,10
    //1
    //2,1
    //3,2,1
    //1,2,3,10,9,8,7,6,5,4
    return 0;
}