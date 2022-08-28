#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char *p,c;
    int i=0,j=1;

    p=(char*)malloc(sizeof(char));
    printf("Enter a string\n");
    while(c!='\n')
    {
        c=getc(stdin);
        j++;
        p=(char*)realloc(p,j*sizeof(char));
        p[i]=c;
        i++;

    }
    p[i]='\0';
    printf("Your name %s",p);
    return 0;
}