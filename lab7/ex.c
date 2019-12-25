
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char*argv[]){
    int a[100];
    int m=1;
    int n=0;
    int x=0;
    int y=0;
    int temp;
    for(m=1;m<argc;m++,n++){
        a[n]=atof(argv[m]);
    }
    for(x=0;x<argc-2;x++){
     if(a[x]<a[x+1]) 
{
temp=a[x];
a[x]=a[x+1];
a[x+1]=temp;}
}
printf("The min is：%d\n",a[argc-2]);
return 0;
}