#include <stdio.h>
#include <stdlib.h>
#define N 1000

int A[N+1]; // array �qa[1]~a[N]

int main(void)
{
    int i,j;
    for (i=0;i<=N;i++) A[i]=1; // array �̭�������1

    for (i=2; i*i<=N ; i++)
    {
        if(A[i]) // �P�_�Ӧ�m�ȬO�_��1
        {
            for (j = i*i; j<=N; j=j+i)
            {
                A[j] = 0;
            }
        }
    }

    // ��ƪ����F

    for (i=2 ; i<=N ; i++)
    {
        if (A[i]) printf("%d, " ,i);
    }


   return 0;
}
