#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    int prime1[50] = {0};
    int table_size = 0;
    int i,j,k=0;

    //�T�|2~99���Ʀr
    for(i=2;i<100;i++)
    {

        bool i_is_prime = true;

        for(j=2;j<i;j++)
        {                //���H�C�@�Ӥp��i����
            if(i % j == 0)
            {
                i_is_prime = false;          //�p�Gi�i�H�Qj�㰣�A��i�N���O���(false)
                break;                       //���X�j��
            }
        }

    // �s�J�d�ߪ�

        if (i_is_prime) //��i�Ƭ���Ʈ�(i_is_true��true)�}�l��J
        {
            prime1[table_size] = i;
            table_size = table_size + 1;
        }


    }

    printf("1~99��ƪ�:\n");

    for(k=0;prime1[k];k++)
    {
            printf("%d ",prime1[k]);
    }


    return 0;
}
