#include <stdio.h>

int main(void) {
  int num;
  scanf("%d",&num);
  if(num%2==0)
  {
  printf("even");
    }
     else if(num<0)
    {
      printf("invalid");
    }
    else{
      printf("odd");
    }
  
    return 0;
}
