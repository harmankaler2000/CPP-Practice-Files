#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //declaring a priority queue
    vector<pair<char,int>> vect;
    //emplace inserts in place
    vect.emplace_back('a',24);
    //below line would not compile
    //vect.push_back('b',25);
    //using push_back to insert
    vect.push_back(make_pair('b',25));
    for(int i=0;i<vect.size();i++)
        cout<<vect[i].first<<" "<<vect[i].second<<endl;
    return 0;
}