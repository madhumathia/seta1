#include<stdio.h>
void main()
{
    int number[12],i,k,sum=0,n;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&number[i]);
        printf("%d",number[i]);
    }
        for(i=0;i<k;i++)
        {
            sum=sum+number[i];
        }
 printf("\n sum = %d",sum);
}
