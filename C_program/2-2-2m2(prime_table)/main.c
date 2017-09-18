#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool prime2[100] = {0};
    int i,j,k=0;

    for(i=0;i<100;i++)
    {
        prime2[i] = true;
        for(j=2;j<i;j++)
        {
            if(i%j == 0)
            {
                prime2[i] = false;
                break;
            }
        }
    }

    for(k=0;k<100;k++)
    {
        printf("%d ",prime2[k]);
    }

    return 0;
}
