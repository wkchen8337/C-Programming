#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000]; //�r���}�C
    int i, j, m, n, k;
    int done;

    scanf("%s", str);
    for (n = strlen(str); n>0 ; n--) //�r����פ��_�Y�p
    {
        done = 0;

        for(m=0 ; (unsigned int) m+n <= strlen(str); m++)
        {
            i = m;
            j = m+n-1; // i,J ��l��m

            while (i < j)
            {
                if(str[i] == str[j])
                {
                    i++;
                    j--;
                }
                else
                {
                    break;
                }
            }
            if  (i >= j)
            {
                for (k=m ; k<m+n ; k++) printf("%c",str[k]); //�L�X��쪺��٦r��
                printf("\n");
                done = 1; //���@�յ��סA���X�j��A���A���C�r����׼з�
            }
        }
        if(done) break; //�Ydone��1 �h�N��o�{��٦r��A���X�j��
    }



    return 0;
}
