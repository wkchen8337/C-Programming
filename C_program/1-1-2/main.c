#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[15] = "incremental";
    char t[15];
    int i,j;

    for(i=0 ; s[i] !='\0'; i++){
        t[i] = s[i];
    }

    t[i] = '\0';

    for(j=0 ; t[j] != '\0'; j++){
        printf("%c",t[j]);
    }

    return 0;
}
