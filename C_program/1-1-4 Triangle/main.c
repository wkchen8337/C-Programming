#include <stdio.h>
#include <stdlib.h>

//n代表要印出的行數
void main(){

    int num;
    printf("請輸入要印出三角形的層數: ");
    scanf("%d",&num);
    print_triangle(num);
    return 0;
}

//印出行
void print_line(int n)
{
    int i;
    for (i=1 ; i<=n ; i++){
        printf("A");
    }
        printf("\n");
}

//多行成直角三角形
void print_triangle(int n)
{
    int i;
    for (i=n;i>=1;i--){
        print_line(i);
    }
}

