#include<stdio.h>

int main()
{
    int i=3;
    int un[1500];
    un[0]=1;
    un[1]=2;
    un[2]=3;
    unsigned long n=4;
    while(i!=1600)
    {
        if(n%2==0 || n%3==0 || n%5==0)
        {
            un[i]=n;
            i++;
        }
        n++;
    }
    printf("%d",un[1499]);
}
