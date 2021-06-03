#include<iostream>
#include<vector>
#include<chrono>
using namespace std;
using std::vector; 
using std::cout; 
using namespace std::chrono; 
int main()
{
    int n=(int)1e6;
    vector<int> v1,v2;
    //reserve space in v2
    v2.reserve(n);
    auto start=high_resolution_clock::now();
    for(int i=0;i<n;++i)
        v1.push_back(i);
    auto stop=high_resolution_clock::now();
    auto duration=duration_cast<microseconds>(stop-start);
    cout<<"Method 1 took "<<duration.count()<<" microseconds\n";
    start=high_resolution_clock::now();
    for(int i=0;i<n;++i)
        v2.push_back(i);
    stop=high_resolution_clock::now();
    duration=duration_cast<microseconds>(stop-start);
    cout<<"Method 2 took "<<duration.count()<<" microseconds\n";
    return 0;
}