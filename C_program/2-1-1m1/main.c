#include <stdio.h>
#include <stdlib.h>

void main()
{
    sum_of_cubes(10);
    printf("%d",sum_of_cubes(10));
}


int sum_of_cubes(int n)
{
    int v = 0;
    int i = 0;
    for (i=1;i<=n;i++){
        v = v + i*i*i ;
    }

    return v;
}
