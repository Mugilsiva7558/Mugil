#include <stdio.h>

int main(void) {
  char ca;
  scanf("%s",&ca);
  if(ca>='a'&&ca<='z'||ca>='A'&&ca<='Z')
  {
    printf("Alphabet");
  }
  else
  {
    printf("invalid");
  }
  return 0;
}
