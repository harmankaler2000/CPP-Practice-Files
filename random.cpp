//use of random_shuffle
#include<bits/stdc++.h>
using namespace std;

//random generator function
int randomfunc(int j)
{
    return rand() % j;
}

int main()
{
    srand(unsigned(time(0)));
    vector<int> arr;
    
    //set values
    for(int j = 1; j < 10; ++j)
    arr.push_back(j);

    //using built in random generator
    random_shuffle(arr.begin(),arr.end());

    //using randomfunc
    //random_shuffle(arr.begin(),arr.end(),randomfunc);

    //print out content
    cout<<"arr contains: ";
    for (auto i = arr.begin(); i != arr.end(); ++i)
        cout<<" "<<*i;
    cout<<endl;

}