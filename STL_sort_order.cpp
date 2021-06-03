//define your own order to use in the inbuilt sort
//method from STL library
#include<iostream>
#include<algorithm>
using namespace std;

//an interval has a start time and end time
struct interval
{
    int start, end;
};

//compares two interval according to the interval
bool comparing(interval st, interval en)
{
    return (st.start < en.start);
}

int main()
{
    interval arr[] = {{6, 8}, {1, 9}, {2, 4}, {4, 7}};
    int n = sizeof(arr)/sizeof(arr[0]);
    //sort the intervals in increasing order of start
    sort(arr, arr + n, comparing);

    cout<<"Intervals sorted by start time: \n";
    for(int i = 0; i < n; i++)
        cout<<"["<<arr[i].start<<","<<arr[i].end<<"]";
    return 0;
}