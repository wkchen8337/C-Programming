#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[50];
    printf("叫块璣ゅ﹃: ");
    scanf("%s",s);
    printf("–ダ计秖:\n");
    printf("a b c d e f g h i j k l m n o p q r s t u v w x y z\n");
    int c[26] = {0};
    int i=0;
    int j=0;
    int k=0;
    int num=0;

    //ダ传糶
    for(i=0;s[i];i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] - 'A' + 'a';  // 糶ASCII CODE + 32 跑糶
        }
    }

    //参璸ダ计秖
    for(j=0;s[j];j++)
    {
        if(s[j] >= 'a' && s[j] <= 'z')
        num = s[j] - 'a';
        c[num] = c[num] + 1;
    }

    for(k=0;c[k]<=26;k++)
    {
        printf("%d ",c[k]);
    }

    return 0;
}
