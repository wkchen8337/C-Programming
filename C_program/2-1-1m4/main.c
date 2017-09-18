#include <stdio.h>
#include <stdlib.h>

int memo[10+1];

int sum_of_cubes(int n)
{
    //�w�g��L�N�^�ǭ�
    if (memo[n] != 0){
        return memo[n];
    }

    //�S��L���ܴN�p����x�s
    int v = 0;
    int i = 0;
    for (i=1;i<=n;i++){
        v = v + i*i*i;
    }

    return memo[n] = v;
}

int main()
{
    //�@�}�l�����Ҧ��ȳ]��0
    //�Ȭ�0���ܴN�N���٨S���s�J����
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
