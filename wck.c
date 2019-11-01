#include<stdio.h>
int main()
{
    int n=0;    
    int n1=0;
    int n2=0;
    scanf("%d",&n2);
    while(n2!=0)
    {
        n1=n2%2;
        n2=n2/2;
        if(n1==1)
        n=n+1;
    }
    printf("%d\n",n);
    return 0;
}