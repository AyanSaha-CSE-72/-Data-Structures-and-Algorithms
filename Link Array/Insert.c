#include<stdio.h>
int main()
{
    int num[50],position,value,size,i,n;
    printf("How many number= ");
    scanf("%d",&n);
    printf("Enter your Number= \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Enter the Position= ");
    scanf("%d",&position);

    printf("Enter the value= ");
    scanf("%d",&value);

    for(i=n;i>position-1;i--)
    {
        num[i]=num[i-1 ];
    }
    num[position-1]=value;

    for(i=0;i<n+1;i++)
    {
        printf("%d ",num[i]);
    }
}
