//You are provided with a vector of integers. 
//Then, you are given queries. For the first query, 
//you are provided with integer, which denotes a 
//position in the vector. The value at this position
//in the vector needs to be erased. The next query 
//consists of integers denoting a range of the 
//positions in the vector. The elements which fall 
//under that range should be removed. The second 
//query is performed on the updated vector which 
//we get after performing the first query.
//Print the size of the vector in the first line and the elements of the vector after the two erase operations in the second line separated by space.

// Sample Input

// 6
// 1 4 6 2 8 9
// 2
// 2 4

// Sample Output

// 3
// 1 8 9

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: \n";
    cin>>n;
    vector<int> vec;
    int inp;
    for(int i=0;i<n;i++)
    {
        cin>>inp;
        vec.push_back(inp);
    }
    int pos,start,end;
    cout<<"Enter position: \n";
    cin>>pos;
    vec.erase(vec.begin()+pos-1);
    cout<<"Enter start of range: \n";
    cin>>start;
    cout<<"\nEnter the end of the range: \n";
    cin>>end;
    vec.erase(vec.begin()+start-1,vec.begin()+end-1);
    cout<<vec.size()<<endl;
    for(int i =0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;
}
