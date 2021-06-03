//using the inbuilt search from STL
#include<iostream>
#include<algorithm>

using namespace std;

void show(int a[], int arr_size)
{
    for(int i = 0; i < arr_size; ++i)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int asize = sizeof(a)/sizeof(a[0]);
    cout<<"\n The array is: \n";
    show(a, asize);
    //need to sort the array 
    sort(a, a+asize);
    show(a, asize);
    //binary search
    if (binary_search(a, a + 10, 2))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";
  
    if (binary_search(a, a + 10, 10))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";
    return 0;
}