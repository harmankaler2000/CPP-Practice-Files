#include<iostream>
using namespace std;

// Alignment requirements
// (typical 32 bit machine)
 
// char         1 byte
// short int    2 bytes
// int          4 bytes
// double       8 bytes

//structure A
typedef struct structa_tag
{
    char c;
    short int s;
}structa_t;

//structure B
typedef struct structb_tag
{
    short int s;
    char c;
    int i;
}structb_t;

//structure C
typedef struct structc_tag
{
    char c;
    double d;
    int s;
}structc_t;

//structure D
typedef struct structd_tag
{
    double d;
    int s;
    char c;
}structd_t;

int main()
{
    cout<<"size of struct a: "<<sizeof(structa_t)<<endl;
    cout<<"size of struct b: "<<sizeof(structb_t)<<endl;
    cout<<"size of struct c: "<<sizeof(structc_t)<<endl;
    cout<<"size of struct d: "<<sizeof(structd_t)<<endl;
    return 0;
}