#include <stdio.h>
int main()
{
    int a,b;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter another number:");
    scanf("%d",&b);

    int c,d;
    c=a>b?a:b;
    d=c;
    while(1)
    {
        if(c%a==0&&c%b==0)
            break;
        c=c+d;
    }
    printf("LCM is %d",c);
}
