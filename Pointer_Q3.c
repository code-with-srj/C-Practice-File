#include<stdio.h>
int main()
{
    int arr[]={12,13,14,15,16};
    printf("\n %d %d %d",sizeof(arr),sizeof(*arr),sizeof(arr[0]));
    return 0;
}

// Output:-
// 20 4 4
