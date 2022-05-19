#include<stdio.h>
int main()
{
    int arr[3][4]=  {
                        1,2,3,4,
                        5,6,7,8,
                        9,10,11,12
                    };
    printf("\n %u %u %u",arr[0]+1,*(arr[0]+1),*(*(arr+0)+1));
    return 0;
}

// Output:-
// 3546068948 2 2
