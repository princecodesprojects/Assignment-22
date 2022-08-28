#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int *p;
    int n,i,sum=0;
    printf("How many data you want to input\n");
    scanf("%d",&n);
    p=calloc(n,sizeof(int));

    if(p==NULL)
    {
        printf("\nMemory Allocatin failed\n");
        return 0;
    }
    
    printf("Enter %d data values\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }

    for(i=0;i<n;i++)
    {
        sum=sum+p[i];
    }

    float avg=sum/n;
    printf("Average is %f",avg);
    free(p);
    return 0;
}