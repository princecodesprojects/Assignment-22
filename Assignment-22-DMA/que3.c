#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int n,i,sum=0;
    int *p;
    printf("How many Numbers you want to enter\n");
    scanf("%d",&n);
    int size=4*n;
    p=(int*)malloc(size);
printf("Enter %d numbers\n",n);
    for(i=0;i<n;i++)
    {
      scanf("%d",p+i);
    }

    for(i=0;i<n;i++)
    {
      sum=sum+p[i];
    }

    printf("Sum is %d",sum);
}