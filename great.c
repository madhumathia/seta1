#include<stdio.h>
int main()
{
    int a,b,c,biggest;
    scanf("%d%d%d",&a,&b,&c);
biggest=a>b?(a>c?a:c):(b>c?b:c);
    printf("%d",biggest);
    return 0;
}
