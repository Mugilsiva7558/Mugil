#include <stdio.h>

int main(void) 
{
  int d,e,f;
  scanf("%d %d %d",&d,&e,&f);
  if(d>e&&d>f)
  {
    printf("%d",d);
  }
  else if(e>f&&e>d)
  {
    printf("%d",e);
}
else
{
  printf("%d",f);
}
  return 0;
}
