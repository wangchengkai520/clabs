#include<stdio.h>
int main()
{
  unsigned int x=1;
  unsigned int Z = 0 - 1;
  int y=0;
  while(x !=0){
      x=x<<1;
      y=y+1;
  }
  printf("%d",y);
  printf("%u\n", Z);
  return 0;
}