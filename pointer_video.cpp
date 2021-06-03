#include<iostream>
using namespace std;

//call by value
void increment(int a)
{
    //here a is a formal argument
    a = a + 1;
    cout<<"a in increment: "<<&a<<endl;
}

//call by pointer
void inc(int *a)
{
    //a is the address if the actual variable
    *a = (*a) + 1;
}

//int A[] just points to the first elelemt of the array as it itself is a pointer
//compiler converts int A[] to int* A
//for arrays it is always call by reference never by value
int SumOfElements(int A[], int size)
{
    int i, sum = 0;
    for(i = 0; i < size; i++)
    {
        sum += A[i];
    }
    return sum;
}
int main()
{
    int a;
    a = 10;
    //here a is the actual argument
    increment(a);
    cout<<"a in main is: "<<&a<<endl;
    cout<<"a after call by value "<<a<<endl;
    inc(&a);
    cout<<"a after call by pointer "<<a<<endl;

    //array and pointer
    //A is the base addres of the array
    int A[5] = {2, 4, 5, 8, 1};
    //A and &A[0] are the same while A[0] and *A are the same
    cout<<A<<" "<<&A[0]<<" "<<A[0]<<" "<<*A<<endl;
    //int *p = &A[0]; //or &A or A all give the same
    //A++ is invalid
    int size = sizeof(A)/sizeof(A[0]);
    int total = SumOfElements(A, size);
    return 0;
}