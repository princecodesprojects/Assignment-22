#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int *p,*q,n;
    printf("How many bytes memory you want to create\n");
    scanf("%d",&n);
    p=(int*)malloc(n);
    if(p==NULL)
    printf("Memory allocation failed\n");
    q=realloc(p,n);
    return 0;
}