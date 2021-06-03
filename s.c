#include<stdio.h>

//empty structure
struct empty
{
};

int main()
{
    struct empty e;
    printf("%d", sizeof(e));
    return 0;
}