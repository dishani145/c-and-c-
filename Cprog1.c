#include<stdio.h>
int main()
{
    int a,b,sum=0,sub=0,mul=0,div=0,rem=0;
    printf("Enter 1st Number=");
    scanf("%d",&a);
    printf("Enter 2nd Number=");
    scanf("%d",&b);
    sum=a+b;
    printf("sum of %d and %d is %d\n",a,b,sum);
    sub=a-b;
    printf("Difference of %d and %d is %d\n",a,b,sub);
    mul=a*b;
    printf("Product of %d and %d is %d\n",a,b,mul);
    div=a/b;
    printf("On dividing %d by %d quotient is %d\n",a,b,div);
    rem=a%b;
    printf("On dividing %d by %d remainder is %d\n",a,b,rem);
    return 0;
}