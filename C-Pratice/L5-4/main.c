/*
W07_02
��J�@�ӥ����
�{�������C�X���F 1 �M�ӥ���ƥ����H�~�������]��
�]�ƥ����q�p��j�ƦC
�p�G�L�k�]�Ƥ���
�h���O������ܳo�ӥ���ƬO���
*/
#include <stdio.h>

int main(void)
{
   int num, div;
   int isPrime;

   printf("Please enter an integer (q to quit): \n");
    //scanf("%d",&num);

   while(scanf("%d",&num) == 1) // ��J���ȬO���
   {
        isPrime = 1;
        for(div=2; div < num; div++)
        {
                if(num%div == 0) //��J���ƥi�H�Qdiv�㰣
                {
                    printf("%d, ",div);
                    isPrime = 0; // �o�{�]�ƤF
                }
        }

        /*for(; div*div >= 2; div--)
        {
                if(num%div == 0) //��J���ƥi�H�Qdiv�㰣
                {
                    printf("%d, ",num/div);
                }
        } */






        if(isPrime == 1)
        printf("%d is prime number.\n", num);
        else
        printf("\b\b are divisors of %d\n", num);

   }

   return 0;
}
