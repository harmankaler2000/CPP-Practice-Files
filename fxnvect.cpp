#include<iostream>
#include<vector>
using namespace std;

//passing the entire copy takes more space and is slower
void func(vector<int> vec)
{
    vec.push_back(40);
}

//passing it using references
void func1(vector<int> &vec)
{
    vec.push_back(30);
}

//if we don't want to change the initial value we will pass
//it as the const reference
void func2(const vector<int> &vec)
{
    //vec.push_back(50);
    //this will give an error
    cout<<endl;
    for (int i=0; i<vec.size(); i++) 
       cout << vec[i] << " ";
}

int main()
{
    vector<int> vect; 
    vect.push_back(10); 
    vect.push_back(20); 
   
    func(vect); 
   
    // vect remains unchanged after function 
    // call 
    for (int i=0; i<vect.size(); i++) 
       cout << vect[i] << " "; 
    cout<<endl;
    func1(vect);

    //vector changes
    for (int i=0; i<vect.size(); i++) 
       cout << vect[i] << " ";
    return 0; 
}