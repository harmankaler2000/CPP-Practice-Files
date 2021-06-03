#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1{1,2,3,4},v2{3,5,7,9};
    v1.swap(v2);
    cout<<"Vector 1 becomes: ";
    for(auto it=v1.begin();it<v1.end();++it)
        cout<<*it<<" ";
    cout<<endl<<"Second vector becomes: ";
    for(auto it=v2.begin();it<v2.end();++it)
        cout<<*it<<" ";
    vector<int> vec1{ 100, 100, 100 };
    vector<int> vec2{ 200, 200, 200, 200, 200 };
 
    vec1.swap(vec2);
 
    cout << "The vec1 contains:";
    for (int i = 0; i < vec1.size(); i++)
        cout << ' ' << vec1[i];
    cout << '\n';
 
    cout << "The vec2 contains:";
    for (int i = 0; i < vec2.size(); i++)
        cout << ' ' << vec2[i];
    cout << '\n';
 
    return 0;
}