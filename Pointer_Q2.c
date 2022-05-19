#include<stdio.h>
int main()
{
    int arr[]={10, 20};
    int *p=arr;
    *p++;
    printf("*p=%d",*p);
    return 0;
}

// Output:-
// *p=20
