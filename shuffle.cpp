#include<bits/stdc++.h>
using namespace std;

int main()
{
    array<int,5> s{1,2,3,4,5};

    //to obtain a time based seed
    unsigned seed = 0;

    //use of shuffle
    shuffle(s.begin(),s.end(),default_random_engine(seed));

    cout<<"Shuffled elements are: \n";
    for (int& i: s)
        cout<<" "<<i;
    cout<<endl;
    return 0;
}