#include <stdio.h>

void input(int *n,int *d)
{
    printf("Enter the numerator and denominator of the fraction: \t");
    scanf("%d %d",n,d);
}

void add(int n1,int d1,int n2,int d2,int *n3,int *d3)
{
    int lcm;
    for (int i=1;i<=d1 && i<=d2;i++)
    {
        if(d1%i==0 && d2%i==0)
        lcm=i;
    }
    *n3=n1*d2+n2*d1;
    *d3=d1*d2;
    *n3= *n3/lcm;
    *d3= *d3/lcm;
}

void output(int n1,int d1,int n2,int d2,int n3,int d3)
{
    printf("Fraction 1:%d/%d \t",n1,d1);
    printf("Fraction 2:%d/%d \t",n2,d2);
    printf("%d/%d + %d/%d = %d/%d \t",n1,d1,n2,d2,n3,d3);
}


int main()
{
    int n1,d1,n2,d2,n3,d3;
    input(&n1,&d1);
    input(&n2,&d2);
    add(n1,d1,n2,d2,&n3,&d3);
    output(n1,d1,n2,d2,n3,d3);
    return 0;
}