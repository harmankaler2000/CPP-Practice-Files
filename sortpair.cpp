#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//sorting on the basis of the first element of the pair
int main()
{
    vector<pair<int,int>> vect;

    int arr[]={10,20,5,40};
    int arr1[]={30,60,20,50};
    int n=sizeof(arr)/sizeof(arr[0]);

    //enterimg values in vector of pairs
    for(int i=0;i<n;i++)
    {
        vect.push_back(make_pair(arr[i],arr[i]));
    }

    //printing the vector
    for(int i=0;i<n;i++)
    {
        cout<<vect[i].first<<" "<<vect[i].second<<endl;
    }
    //simple sort function ascending
    sort(vect.begin(),vect.end());
    //printing the sorted vector
    cout<<"The vector after sort operation is: \n";
    for(int i=0;i<n;i++)
    {
        cout<<vect[i].first<<" "<<vect[i].second<<endl;
    }
    //sorting in reverse
    sort(vect.rbegin(),vect.rend());
    //printing the sorted vector
    cout<<"The vector after sort operation is: \n";
    for(int i=0;i<n;i++)
    {
        cout<<vect[i].first<<" "<<vect[i].second<<endl;
    }
    
    return 0;
}