#include<iostream>
#include<list>

using namespace std;

//predicate function 
bool even(const int& value){ return (value%2) == 0;}

bool compare(double a, double b)
{
    return ((int)a == (int)b);
}

bool comparator(int first,int second)
{
    return first<second;
}
int main()
{
    list<int> demo_list;
    //push_back()
    demo_list.push_back(10); 
    demo_list.push_back(20); 
    demo_list.push_back(30); 
    demo_list.push_back(40); 
    //begin end
    for(auto itr = demo_list.begin(); itr!=demo_list.end();itr++)
        cout<<*itr<<" ";
    //push_front
    demo_list.push_front(5);
    for(auto it = demo_list.begin(); it!=demo_list.end();it++)
        cout<<*it<<" ";
    //pop_front
    demo_list.pop_front();
    for(auto it1 = demo_list.begin(); it1!=demo_list.end();it1++)
        cout<<*it1<<" ";
    //pop_back
    demo_list.pop_back();
    for(auto it2 = demo_list.begin(); it2!=demo_list.end();it2++)
        cout<<*it2<<" ";
    //rbegin rend
    list<int> lis = {10,20,30,40,50};
    for(auto it3 = lis.rbegin();it3!=lis.rend();++it3)
        cout<<*it3<<" ";
    //cbegin cend
    for(auto it4 = lis.cbegin();it4!=lis.cend();++it4)
        cout<<*it4<<" ";
    for(auto it5 = lis.crbegin();it5!=lis.crend();++it5)
        cout<<*it5<<" ";
    //empty
    if(demo_list.empty())
        cout<<"List is empty\n";
    else
        cout<<"List is not empty\n";
    
    list<int> l1,l2;
    //assign inserts multile numbers
    //creates 3 occurences of 2
    l1.assign(3,2);
    list<int>::iterator it6 = l1.begin();
    //iterator to point to 3rd position
    advance(it6,2);
    //using insert to insert 1 element at the 3rd position
    //inserts 5 at 3rd position
    l1.insert(it6,5);
    for(auto it7 = demo_list.rbegin();it7!=demo_list.rend();++it7)
        cout<<*it7<<" ";
    
    //using insert to insert at 2 element at the 4th position inserts 2
    //occurences of 7 at 4th position
    l1.insert(it6,2,7);
    for(auto it8 = demo_list.rbegin();it8!=demo_list.rend();++it8)
        cout<<*it8<<" ";
    
    //erasing a single element using erase
    list<int>::iterator it9 = demo_list.begin();
    demo_list.erase(it9);
    for(auto it10 = demo_list.rbegin();it10!=demo_list.rend();++it10)
        cout<<*it10<<" ";
    
    //erasing a range of elements using erase
    list<int>::iterator it11,it12;
    it11 = demo_list.begin();
    it12 = demo_list.end();
    demo_list.push_front(12);
    demo_list.push_front(13);
    demo_list.push_front(15);
    demo_list.push_front(14);
    //incrementing it12 by 3 positions
    advance(it12,3);
    //deleting range of elements from index [0,3)
    demo_list.erase(it11,it12);
    cout<<"List after deleting first three elements: \n";
    for(auto it13 = demo_list.begin(); it13!=demo_list.end();++it13)
        cout<<*it13<<" ";
    cout<<endl;

    list<int> demo2;
    //assign the value 100, 5 times
    demo2.assign(5,100);
    //displaying the list
    for(int it14:demo2)
    {
        cout<<it14<<" ";
    }
    //to copy elements from an existing list to a new list
    list<int> first, second;
    //assigning to second
    second.assign(5,100);
    //assigning to first
    first.assign(second.begin(),second.end());
    for(int i : first)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //cleaning all the elements
    first.clear();
    first.push_back(10);
    first.push_back(20);
    first.push_back(20);
    first.push_back(30);
    first.push_back(40);
    //list before removing elements
    for(auto it15 = first.begin();it15!=first.end();++it15)
        cout<<*it15<<" ";
    //delete all elements with the value 20
    first.remove(20);
    //list after removing elements
    cout<<"\n List after removing elements: \n";
    for(auto it16 = first.begin();it16 !=first.end();++it16)
        cout<<*it16<<" ";
    //using remove_if
    list<int> mylist{1,2,2,2,2,5,6,7};
    mylist.remove_if(even);
    for(auto it17 = mylist.begin();it17!=mylist.end();++it17)
        cout<<" "<<*it17;
    //reverse the list
    mylist.reverse();
    //list after reversal
    for(auto it18 = mylist.begin();it18!=mylist.end();++it18)
        cout<<" "<<*it18;
    cout<<"List size is: "<<mylist.size()<<endl;

    demo_list.push_back(10);
    demo_list.push_back(20);
    demo_list.push_back(30);
    demo_list.push_back(40);

    for(auto it19 = demo_list.begin();it19!=demo_list.end();++it19)
        cout<<" "<<*it19;
    
    //resizing the list to less elements
    demo_list.resize(2);
    for(auto it20 = demo_list.begin();it20!=demo_list.end();++it20)
        cout<<" "<<*it20;
    //resize to more number of elements
    demo_list.resize(20);
    for(auto it21 = demo_list.begin();it21!=demo_list.end();++it21)
        cout<<" "<<*it21;
    //resize by giving default value
    demo_list.resize(25,100);
    for(auto it22 = demo_list.begin();it22!=demo_list.end();++it22)
        cout<<" "<<*it22;
    cout<<"Max size of the list is: "<<demo_list.max_size()<<endl;

    list<double> l = { 2.55, 3.15, 4.16, 4.16,
                          4.77, 12.65, 12.65, 13.59 };
    cout<<"List is: \n";
    l.sort();
    //uniqu with no parameters
    l.unique();
    //starts from the first element to the last
    for(auto it23 = l.begin();it23!=l.end();it23++)
        cout<<*it23<<" ";
    
    //unique with a function
    l.unique(compare);
    for(auto it24 = l.begin();it24!=l.end();it24++)
        cout<<*it24<<" ";
    
    //emplcae_front and back
    mylist.emplace_front(1);
    mylist.emplace_front(2);
    mylist.emplace_front(3);
    mylist.emplace_front(4);
    for(auto it25 = mylist.begin();it25!=mylist.end();it25++)
        cout<<*it25<<" ";
    mylist.emplace_back(1);
    mylist.emplace_back(2);
    mylist.emplace_back(3);
    mylist.emplace_back(4);
    for(auto it26 = mylist.begin();it26!=mylist.end();it26++)
        cout<<*it26<<" ";
    
    //equal operator
    list<int> mylist1{ 1, 2, 3 }; 
    list<int> mylist2{ 3, 2, 1, 4 }; 
    mylist1 = mylist2; 
    cout << "mylist1 = "; 
    for(auto it27 = mylist1.begin();it27!=mylist1.end();it27++)
        cout<<" "<<*it27;
    list<int> vec1{1,2,3,4};
    list<int> vec2{3,5,7,9};
    //swap
    vec1.swap(vec2);
    cout << "mylist1 = "; 
    for (auto it28 = vec1.begin(); 
              it28 != vec1.end(); ++it28) 
        cout << ' ' << *it28; 
  
    // printing the second list 
    cout << endl 
        << "mylist2 = "; 
    for (auto it29 = vec2.begin(); 
              it29 != vec2.end(); ++it29) 
        cout << ' ' << *it29; 
    
    //splice in 3 ways
    //1. Transfer all the elements
    list<int> l1 {1,2,3};
    list<int> l2 {4,5};
    list<int> l3 {6,7,8};
    //transfer all the elements of l2
    l1.splice(l1.begin(),l2);
    //at the beggining of l1
    cout<<"l1 after splice operation: "<<endl;
    for(auto x: l1)
        cout<<x<<" ";
    //transfer all elements of l1
    l3.splice(l3.end(),l1);
    //at the end of l2
    cout<<"\n list l3 at the end of the operation"<<endl;
    for(auto x: l3)
        cout<<x<<" ";

    //2. transfering a single element
    list<int>::iterator it30;
    it30 = l2.begin();
    l1.splice(l1.end(),l2,it30);
    cout<<"list l1 after slice operation "<<endl;
    for(auto x:l1)
    {
        cout<<x<<" ";
    }
    it30 = l1.begin();
    //advance the iterator
    advance(it30,2);
    //transfer 3,4 and 5 at the beginning of l2
    l2.splice(l2.begin(),l1,it30,l1.end());
    for(auto x:l2)
        cout<<x<<" ";
    
    //merge 
    list<int> l4 {10,20,30};
    list<int> l5 {40,50,60};
    l5.merge(l4);
    for(auto it31 = l5.begin();it31 !=l5.end();++it31)
        cout<<*it31<<" ";
    
    list<int> l6 {1,70,80};
    list<int> l7 {2,3,4};
    l7.merge(l6,comparator);
    for(auto it32 = l7.begin();it32!=l7.end();++it32)
        cout<<*it32<<" ";

    //emplace
    list<int> l7 {5,6,7,8,9,10};
    auto it33 = l7.emplace(l7.begin(),2);
    //inserts at the beginning of the list
    l7.emplace(it33,1);
    for(auto it33 = l7.begin();it33!=l7.end();++it33)
        cout<<*it33<<" ";
    
    //emplace type 2
    list<pair<int, char> > lis; 
  
    // inserts at the beginning of the list 
    auto it = lis.emplace(lis.begin(), 4, 'a'); 
  
    // inserts at the beginning of the list 
    lis.emplace(it, 3, 'b'); 
  
    cout << "List: "; 
  
    //for (auto it : lis) 
       // cout << "(" << it.first << ", " << it.second << ") "; 
    
    return 0;

}