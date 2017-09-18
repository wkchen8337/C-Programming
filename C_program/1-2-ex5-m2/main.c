#include <stdio.h>
#include <stdlib.h>

int main()
{

    char s[15] ="Hello World!";
    char t[15] ="";
    int i,j,k;

    for (i=0 ; s[i] ; i++)
        t[i] = s[i];



    for (j=0; t[j]; j++){
        if ( t[j] >= 'A' && t[j] <= 'Z')
        {
            t[j] = t[j] - 'A' + 'a';
        }
    }

    printf("%s",t);

    return 0;
}




