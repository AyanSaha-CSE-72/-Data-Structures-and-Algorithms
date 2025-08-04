#include<stdio.h>
int main()
{
     int num[50],i,n;
    printf("How many number= ");
    scanf("%d",&n);
    printf("Enter your Number= \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("The Traverse Number: ");
    for(int i=0;i<n;i++)
    {
         printf("%d  ",num[i]);
    }

}
//h.w to asending 0r any position
