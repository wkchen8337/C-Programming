#include <stdio.h>
#include <stdlib.h>

int main()
{

    char s[15] = "Hello World!";
    int i;

    for (i=0 ; s[i] ; i++){
        if(s[i] > 'A' && s[i] < 'Z'){
            printf("%c",s[i] - 'A' + 'a');
        }
        else{
            printf("%c",s[i]);
        }
    }
    return 0;
}
