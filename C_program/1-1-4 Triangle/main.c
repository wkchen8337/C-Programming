#include <stdio.h>
#include <stdlib.h>

//n�N��n�L�X�����
void main(){

    int num;
    printf("�п�J�n�L�X�T���Ϊ��h��: ");
    scanf("%d",&num);
    print_triangle(num);
    return 0;
}

//�L�X��
void print_line(int n)
{
    int i;
    for (i=1 ; i<=n ; i++){
        printf("A");
    }
        printf("\n");
}

//�h�榨�����T����
void print_triangle(int n)
{
    int i;
    for (i=n;i>=1;i--){
        print_line(i);
    }
}

