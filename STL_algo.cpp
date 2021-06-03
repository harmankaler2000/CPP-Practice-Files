#include<iostream>
#include<vector>
#include<numeric> //for accumulate
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {10, 20, 5, 23, 42, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vec(arr, arr + n);

    cout<<"vector is: \n";
    for(int i = 0; i < n; i++)
        cout<<vec[i]<<" ";

    //sort in ascending order
    sort(vec.begin(), vec.end());

    cout<<"\nVector after sorting is: \n";
    for(int i = 0; i < n; i++)
        cout<<vec[i]<<" ";

    //reverse the vector
    reverse(vec.begin(), vec.end());
    cout<<"reverse: \n";
    for(int i = 0; i < n; i++)
        cout<<vec[i]<<" ";
    
    cout<<"Maximum element: \n";
    cout<<*max_element(vec.begin(), vec.end());

    cout<<"Minimum element: \n";
    cout<<*min_element(vec.begin(), vec.end());

    cout<<"summation using accumulate: \n";
    cout<<accumulate(vec.begin(), vec.end(), 0);
    
    int arr1[] = {10, 20, 5, 23, 42, 20, 15};
    int n = sizeof(arr1)/sizeof(arr[0]);
    vector<int> vect(arr, arr+n);
    cout<<"Occurences of 20: ";
    cout<<count(vect.begin(), vect.end(), 20);
    find(vect.begin(), vect.end(),5) != vect.end()?cout<<"Element found":cout<<"Element not found";

    int arr2[] = {5,10, 15, 0, 23, 42, 45};
    int n = sizeof(arr2) / sizeof(arr2[0]);
    vector<int> vect1(arr2, arr2+n);
    sort(vect1.begin(), vect1.end());
    auto q = lower_bound(vect1.begin(), vect1.end(), 20);
    auto p = upper_bound(vect1.begin(), vect1.end(), 20);
    cout<<"Lower bound position: "<<q - vect.begin()<<endl;
    cout<<"The upper bound is at position: "<<p-vect.begin()<<endl;
    return 0;
}