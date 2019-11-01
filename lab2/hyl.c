#include<stdio.h>
int main()
{
  unsigned int x=1;
  unsigned int y=0;
  while(x!=0){
      x=x<<1;
      y=y+1;
  }
  printf("x=%u\n.",y);
}