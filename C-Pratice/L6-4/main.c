/*
Description

Convert a decimal integer into its binary representation.
For each bit in the binary representation, flip it if its left bit is 1 and keep it unchanged if its left bit is 0.
The leftmost bit should refer to the rightmost bit and uses the same rule to decide if it needs to flip.

Example:

11 -> 1011

1011 -> 0110

Input

The input consists of an integer N (2 <= N <= 1024)

Output

The binary representation of N and the result of flipping. Note that you do not need to print ��\n�� at the end of the output.

Sample Input

11
Sample Output

1011 0110

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0 , n=0, ori_n=0, c=0;

    scanf("%d", &n); //Ū�J�Ʀr11
    ori_n = n; //��n���s�_��

    i = 1;
    while (i<=n) i = i*2;//i�@����2�A����W�L11�N�� n = 16
    i = i/2; //16�W�L�F! �ҥH��2�A���L�ܦ�8
    while(i>0)
    {
        printf("%d",n/i);
        n = n%i; //n��i���l��
        i = i/2;
    }
    printf(" "); //�h�L�@�ӪŮ�A�}�l½��

    //////�}�l½��///////////

    n = ori_n; //��n�s�^��
    i=1;
    c = n%2; //�P�_��J���ƬO�_���_��

    while (i<=n) i=i*2;
    i = i/2;

    while(i>0)
    {
        printf("%d", ( c + n/i)%2 ); //c�O0�A���G��W���ۦP
        c = n/i;
        n = n%i; //n��i���l��
        i = i/2;
    }

    return 0;
}
