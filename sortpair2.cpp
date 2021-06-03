#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//sort the vector on the basis of the second element of the pair.
//ascending order
//sorting function to sort by the second element
bool sortsec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second>b.second);
}

//descending order
bool sortsec1(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second<b.second);
}

int main()
{
    vector<pair<int,int>> vect;

    int arr[]={10,20,5,40};
    int arr1[]={30,60,20,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
        vect.push_back(make_pair(arr[i],arr1[i]));
    //printing the vector
    for(int i=0;i<n;i++)
    {
        cout<<vect[i].first<<" "<<vect[i].second<<endl;
    }

    //sort function
    sort(vect.begin(),vect.end(),sortsec);

    //printing the sorted vector
    cout<<"The vector after sort operation is: \n";
    for(int i=0;i<n;i++)
    {
        cout<<vect[i].first<<" "<<vect[i].second<<endl;
    }
    
    //sort in desc
    sort(vect.begin(),vect.end(),sortsec1);
    //printing the sorted vector
    cout<<"The vector after sort operation is: \n";
    for(int i=0;i<n;i++)
    {
        cout<<vect[i].first<<" "<<vect[i].second<<endl;
    }
    return 0;
}