#include<iostream>
#include<vector>
using namespace std;

vector<string> return_string;
void find_word(string s,vector<string>& dict,int a,string b)
{
    if(a == s.length())
    {
        return_string.push_back(b);
        return;
    }
    int n1 = s.length();
    int n2 = dict.size();
    for(int i=0;i<n2;i++)
    {
        int col = dict[i].length();
        string k = s.substr(a,col);
        if(col <= n1 - a && k == dict[i])
        {
            find_word(s,dict,a+col,b+" "+k);
        }
    }
}
vector<string> space(string s,vector<string>& dict)
{
    int n1 = s.length();
    int n2 = dict.size();
    return_string.clear();
    for(int i = 0;i < n2; i++)
    {
        int col = dict[i].length();
        string k = s.substr(0,col);
        if(col <= n1 && k == dict[i])
        {
            find_word(s,dict,col,k);
        }
    }
    return return_string;
}

int main()
{
    string str;
    cout<<"Enter the string: \n";
    cin>>str;
    int n;
    cout<<"Enter the size of the dictionary: \n";
    cin>>n;
    vector<string> s;
    string inp;
    cout<<"Enter the dictionary: \n";
    for(int i = 0;i < n;i++)
    {
        cin>>inp;
        s.push_back(inp);
    }
    vector<string> final_string;
    final_string = space(str,s);
    for(auto it = final_string.begin(); it != final_string.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}