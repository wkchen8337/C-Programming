#include <stdio.h>
#include <stdlib.h>

int table[10+1]; // 多一位給\n放

int main()
{
    bulid_table();

    int n;
    scanf("%d",&n);
    printf("%d",sum_of_cubes(n));

    return 0;
}


void bulid_table()
{
    int i;
    for (i=1;i<=10;i++){
        table[i] = i*i*i;
    }
}

int sum_of_cubes(int n)
{
    int v = 0;
    int i = 0;
    for (i=1;i<=n;i++){
        v = v + table[i] ; //table直接給立方數大小
    }

    return v;
}
