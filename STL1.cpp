#include<iostream>
#include<list>
using namespace std;

//function to find the greatest common integer
//between both the lists
void greatest_element(list<int> list1, list<int> list2)
{
    //declaring a variable to store 
    //the common element
    int greatest;
    //variable to keep track if the common 
    //element was found or not
    int flag = 0; //0 = not found
    //creating iterators to traverse the list
    list<int>::iterator list1_it;
    list<int>::iterator list2_it;
    //traversing in both the lists to find the common element
    for(list1_it = list1.begin(); list1_it != list1.end();++list1_it)
    {
        for(list2_it = list2.begin(); list2_it != list2.end();++list2_it)
        {
            //if previously there was no common element found 
            //initiallize greater with this common value
            if(*list1_it == *list2_it && flag == 0)
            {
                greatest = *list1_it;
                flag = 1; //intialize flag to 1 for element found 
            }
            //if previous common element was found then compare 
            //with new value
            else if(*list1_it == *list2_it && flag == 1)
            {
                if(*list1_it > greatest)
                    greatest = *list1_it;
            }
        }
    }
    //if flag was not reintialized that means no common element found
    if(flag == 0)
    {
        cout<<"No common element between the lists\n";
    }
    //print the common element
    else
    {
        cout<<"Common Element Found: "<<greatest<<endl;
    }
    return;
}
int main()
{
    //declaring both the lists
    list<int> l1, l2;
    //size of both the lists
    int n1,n2;
    //user input for size of both the lists
    cout<<"Enter the size of List1: \n";
    cin>>n1;
    cout<<"Enter the size of List2: \n";
    cin>>n2;
    //taking list1 as input from the user
    cout<<"Enter List1 elements: \n";
    //variable to store the current input
    int num;
    for(int i = 0; i< n1; i++)
    {
        cin>>num;
        //adding the input to list1
        l1.push_back(num);
    }

    //taking List2 as input
    cout<<"Enter List2 elements: \n";
    for(int i = 0;i < n2;i++)
    {
        cin>>num;
        //adding the input to List2
        l2.push_back(num);
    }
    //function to find the greatest element
    greatest_element(l1,l2);
    return 0;
}