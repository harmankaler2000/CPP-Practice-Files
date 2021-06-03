#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main()
{
    set<int> s;
    int n;
    cout<<"Enter the size of the query: \n";
    cin>>n;
    cout<<"Enter the queries: ";
    int x,y;//x os type of query and x is an integer
    //1 x add x to set
    //2 x delte an element x from the set
    //3 x if x is present print "Yes" else "No"
    for(int i =0;i<n;i++)
    {
        cin>>x>>y;
        if(x == 1)
            s.insert(y);
        else if(x == 2)
        {
            s.erase(y);
        }
        else if(x == 3)
        {
            set<int>::iterator it = s.find(y);
            if(it == s.end())
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
        }
    }
}