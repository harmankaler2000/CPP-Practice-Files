#include<iostream>
using namespace std;
//array of structures
struct Point
{
    int x, y;
};

int main()
{
    //array of structures
    struct Point arr[10];
    //access array members
    arr[0].x = 10;
    arr[0].y = 20;
    cout<<arr[0].x<<" "<<arr[0].y<<endl;

    struct Point p1 = {1, 2};
    //p2 is a pointer to structure p1
    struct Point* p2 = &p1;
    //accessing structure members using structure pointer
    cout<<p2->x<<" "<<p2->y;
    return 0;
}