#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    int prime1[50] = {0};
    int table_size = 0;
    int i,j,k=0;

    //枚舉2~99的數字
    for(i=2;i<100;i++)
    {

        bool i_is_prime = true;

        for(j=2;j<i;j++)
        {                //除以每一個小於i的數
            if(i % j == 0)
            {
                i_is_prime = false;          //如果i可以被j整除，那i就不是質數(false)
                break;                       //跳出迴圈
            }
        }

    // 存入查詢表

        if (i_is_prime) //當i數為質數時(i_is_true為true)開始填入
        {
            prime1[table_size] = i;
            table_size = table_size + 1;
        }


    }

    printf("1~99質數表:\n");

    for(k=0;prime1[k];k++)
    {
            printf("%d ",prime1[k]);
    }


    return 0;
}
