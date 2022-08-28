#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int *p,n,i;
    printf("How numbers you want to store\n");
    scanf("%d",&n);
    p=calloc(n,sizeof(int));

    printf("Enter %d elements\n",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }

    int large=p[0];
    for(i=1;i<n;i++)
    {
        if(large<p[i])
        {
            int t=large;
            large=p[i];
            p[i]=t;
        }
    }

    printf("Largest element in array is %d",large);
}