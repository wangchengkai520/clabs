#include<stdio.h>
int strindex (char s[],char t[])
{
    int i,j,k;
    for(i=0;s[i]!='\0';i++){
        for(j=i,k=0;t[k]!='\0'&& s[j]==t[k];j++,k++);
        if(k>0&&t[k]=='\0')
        return i;    
    }
    return -1;
}
int main(){
    char x[100];
    char y[100];
    printf("please input the chain of characters\n");
    scanf("%s %s",x,y);
    printf("%d\n",strindex(x,y));
}