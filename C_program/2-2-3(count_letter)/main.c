#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[50];
    printf("�п�J�^��r��: ");
    scanf("%s",s);
    printf("�C�Ӧr�����ƶq��:\n");
    printf("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z\n");
    int c[26] = {0};
    int i=0;
    int j=0;
    int k=0;
    int num=0;

    //�r�����p�g
    for(i=0;s[i];i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] - 'A' + 'a';  // �j�gASCII CODE + 32 �ܬ��p�g
        }
    }

    //�έp�r���ƶq
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
