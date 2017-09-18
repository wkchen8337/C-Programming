#include <stdio.h>
#include <stdlib.h>

int memo[10+1];

int sum_of_cubes(int n)
{
    //已經算過就回傳值
    if (memo[n] != 0){
        return memo[n];
    }

    //沒算過的話就計算並儲存
    int v = 0;
    int i = 0;
    for (i=1;i<=n;i++){
        v = v + i*i*i;
    }

    return memo[n] = v;
}

int main()
{
    //一開始先把表所有值設成0
    //值為0的話就代表還沒有存入答案
    int i;
    for (i=0;i<=10;i++)
    {
        memo[i] = 0;
    }

    int num;

    while(num != 0)
    {
        scanf("%d",&num);
        printf("%d\n",sum_of_cubes(num));
    }


    return 0;
}
