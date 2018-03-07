#include<stdio.h>
int main()
{
        int i,a,b,c=1;
        printf("\n enter the first number:");
        scanf("%d",&a);
        printf("\n enter the second number:");
        scanf("%d",&b);
        for(i=1;i<=b;i++)
        {
                c=a*c;
        }
        printf("\n result is: %d",c);
        return 0;
}
