#include<stdio.h>
int main()
{
    int count=0;
    char number1;
    int number2=0;
    int i = 0;
    printf("please input the number\n");
    while((number1 = getchar()) !='\n'){
    number2 =number2*10+(number1 - '0');    
    }
    while(number2 != 0){
    i = number2 - (number2/2)*2;
    number2 = number2/2;
    if(i==1){
      count++;  
    }    
    }
    printf("the amount is:%d\n",count);
    return 0;
}    
