#include<iostream>
#include<forward_list>
#include<list>

using namespace std;

bool cmp_fun(int a,int b)
{
    return a>b;
}

bool prime(const int& value)
{
    int i;
    for(i = 2;i<value;i++)
    {
        if(value%i==0)
        {
            return false;
        }
    }
    if(value == i)
    {
        return true;
    }
}

bool even(const int& value)
{
    return ((value%2)==0);
}

int main()
{
    forward_list<int> s1,s2;
    //asign function
    //create n elements in s1 and initialize 
    //all of them to 3
    s1.assign(5,3);
    //intialize s2 with elements in the range
    //[s1.begin(),s1.end())
    cout<<"Sample1: "<<endl;
    for(int& x: s1)
        cout<<x<<" ";
    cout<<endl;
    cout<<"Sample2: "<<endl;
    for(int& x:s2)
        cout<<x<<" ";
    forward_list<int> s3;
    //initialize with initialization list
    s3.assign({4,5,7,8,9,45});
    cout<<"sample 3: "<<endl;
    for(int& x:s3)
        cout<<x<<" ";
    //push_front() and pop_front()
    forward_list<int> my {1,2,3,4,5};
    my.push_front(6);
    for(auto it = my.begin();it!=my.end();++it)
        cout<<" "<<*it;
    cout<<endl;
    my.pop_front();
    for(auto it1=my.begin();it1!=my.end();++it1)
        cout<<" "<<*it1;
    //emplace_front
    my.emplace_front(1);
    my.emplace_front(10);
    my.emplace_front(12);
    my.emplace_front(11);
    my.emplace_front(15);
    my.emplace_front(20);
    for(auto it2=my.begin();it2!=my.end();++it2)
        cout<<" "<<*it2;
    cout<<endl;
    //insert_after
    forward_list<int> fw = {1,2,3,4,5};
    list<int> s = {8,9,10};
    //this iterator points to the first element
    auto it3 = fw.begin();
    //new element inserted
    int element = 20;
    it3 = fw.insert_after(it3,element);
    cout<<"After syntax 1: ";
    for(auto it4 = fw.cbegin();it4!=fw.cend();++it4)
        cout<<*it4<<" ";
    cout<<endl;
    //it3 points to new element inserted which is 20
    //make it to point to next element
    it3++;
    it3 = fw.insert_after(it3,3,element);
    cout<<"\n After syntax 2: ";
    for(auto it5 = fw.cbegin();it5!=fw.cend();it5++)
        cout<<*it5<<" ";
    cout<<endl;
    it3 = fw.insert_after(it3,s.begin(),s.end());
    cout<<"\n After syntax 3: "<<endl;
    for(auto it6 = fw.cbegin();it6!=fw.cend();it6++)
        cout<<*it6<<" ";
    cout<<endl;
    it3 = fw.insert_after(it3,{50,60});
    cout<<"\n After Syntax 4: "<<endl;
    for(auto it7 = fw.cbegin();it7!=fw.cend();it7++)
        cout<<*it7<<" ";
    cout<<endl;
    //emplace_after
    forward_list<int> fw1 = {1,2,3,4,5};
    auto it8 = fw1.before_begin();
    //inserts elements at positions
    it8 = fw1.emplace_after(it8,8);
    it8 = fw1.emplace_after(it8,10);
    for(auto it9 = fw1.cbegin();it9!=fw1.cend();++it9)
        cout<<*it9<<" ";
    cout<<endl;
    //clear
    fw1.clear();
    for(auto it10 = fw1.begin();it10!=fw1.end();++it10)
        cout<<' '<<*it10;
    cout<<endl;
    //erase_after
    //erasing all elements
    forward_list<int> my_list {1,2,3,4,5};
    forward_list<int>::iterator it11;
    it11 = my_list.begin();
    my_list.erase_after(it11);
    for(auto it12 = my_list.begin();it12!=my_list.end();++it12)
        cout<<" "<<*it12;
    cout<<endl;
    //removing within a range
    forward_list<int> myflist{1,2,3,4,5};
    forward_list<int>::iterator it13,it14;
    it13 = myflist.begin();
    it14 = myflist.end();
    myflist.erase_after(it13,it14);
    for(auto it15 = myflist.begin();it15!=myflist.end();++it15)
        cout<<" "<<*it15;
    cout<<endl;
    //remove
    myflist.remove(2);
    for(auto it16 = myflist.begin();it16!=myflist.end();++it16)
        cout<<" "<<*it16;
    cout<<endl;
    forward_list<int> myfor {1,2,2,2,2,5,6,7,2, 4, 6, 7, 9, 11, 13};
    myfor.remove_if(even);
    for(auto it16 = myfor.begin();it16!=myfor.end();++it16)
        cout<<" "<<*it16;
    cout<<endl;
    myfor.remove_if(prime);
    for(auto it17 = myfor.begin();it17!=myfor.end();++it17)
        cout<<" "<<*it17;
    //splice_after
    forward_list<int> l1 = {10,20,30,40};
    forward_list<int> l2 = {4,9};
    //splice after
    //all elements except the first element in l1
    //is inserted in l2 between 4 and 9
    l2.splice_after(l2.begin(),l1,l1.begin(),l1.end());
    cout<<"Elements are: "<<endl;
    for(auto it18 = l2.end();it18!=l2.end();++it18)
        cout<<*it18<<" ";
    //front()
    cout<<endl<<" front is: "<<l2.front()<<endl;
    cout<<"Empty: "<<l2.empty()<<endl;
    cout<<"Begin and end: \n";
    for(auto it19=l2.begin();it19!=l2.end();it19++)
        cout<<*it19<<" ";
    cout<<endl;
    cout<<"cbegin() and cend()\n";
    for(auto it20 = l2.cbegin();it20!=l2.cend();it20++)
        cout<<*it20<<" ";
    cout<<endl;
    cout<<"Before begin: \n";
    auto it21 = l2.before_begin();
    l2.insert_after(it21,10);
    for(auto it22 = l2.begin();it22!=l2.end();it22++)
        cout<<*it22<<" ";
    cout<<endl;
    cout<<"cBefore begin: \n";
    auto it23 = l2.cbefore_begin();
    l2.insert_after(it23,10);
    for(auto it24 = l2.begin();it24!=l2.end();it24++)
        cout<<*it24<<" ";
    forward_list<int> f;
    cout<<"max size: "<<f.max_size()<<endl;
    forward_list<int> f1 = {10,20,30,40,50};
    cout<<"The contents of the forward list: ";
    for(auto it25 = f1.begin();it25!=f1.end();++it25)
        cout<<*it25<<" ";
    cout<<endl;
    f1.resize(7);
    cout<<"After resizing: ";
    for(auto it26 = f1.begin();it26!=f1.end();it26++)
        cout<<*it26<<" ";
    cout<<endl;
    forward_list<int> f2 = {10,20,30,40,50};
    f2.resize(3);
    for(auto it27 = f2.begin();it27!=f2.begin();it27++)
        cout<<*it27<<" ";
    cout<<endl;


    //manipulating functions
    //1.merge
    f2.merge(f1);
    for(auto it28 = f2.begin();it28!=f2.begin();it28++)
        cout<<*it28<<" ";
    
    //merge with a compare function
    f2.merge(f1,cmp_fun);
    cout<<"List after mergining: "<<endl;
    for(auto it29 = f2.begin();it29!=f2.end();it29++)
        cout<<*it29<<" ";
    cout<<endl;
    //=
    f1 = f2;
    for(auto it30 = f1.begin();it30!=f1.end();++it30)
    {
        cout<<*it30<<" ";
    }
    cout<<endl;
    //sort
    f1.sort();
    for(auto it31 = f1.begin();it31!=f1.end();it31++)
        cout<<*it31<<" ";
    cout<<endl;
    forward_list<int> l = { 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 2, 4, 4 };
    cout<<"List of elements efore i=unique operation: \n";
    for(auto it32 = l.begin();it32!=l.end();++it32)
        cout<<*it32<<" ";
    cout<<endl;
    l.unique();
    cout<<"After unique\n";
    for(auto it33 = l.begin();it33!=l.end();++it33)
        cout<<*it33<<" ";
    cout<<endl;
    forward_list<int> m1{1,2,3,4};
    forward_list<int> m2{3,5,7,9};
    m1.swap(m2);
    cout<<"List1: \n";
    for(auto it34 = m1.begin();it34!=m1.end();it34++)
        cout<<*it34<<" ";
    cout<<endl;
    cout<<"List2: \n";
    for(auto it35 = m2.begin();it35!=m2.end();it35++)
        cout<<*it35<<" ";
    cout<<endl;
    
    return 0;
}