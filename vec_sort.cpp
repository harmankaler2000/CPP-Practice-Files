/* 
You are given integers.Sort the integers and print the sorted order.
Store the

integers in a vector.Vectors are sequence containers representing 
arrays that can change in size.

Input Format

The first line of the input contains
where is the number of integers. The next line contains integers.
Constraints

, where is the

integer in the vector.

Output Format

Print the integers in the sorted order one by one in a single line followed by a space.

Sample Input

5
1 6 10 8 4

Sample Output

1 4 6 8 10

*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    cout<<"Enter the size: \n";
    int n;
    cin>>n;
    cout<<"Enter the vector: \n";
    vector<int> vec;
    int in;
    for(int i=0;i<n;i++)
        cin>>in;
        vec.push_back(in);   
    cout<<"The sorted vector is: \n";
    sort(vec.begin(),vec.end());
    for(int i=0;i<n;i++)
    {
        cout<<vec[i];
    }
    return 0;
}