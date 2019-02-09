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
    printf("No");
  }
  return 0;
}
