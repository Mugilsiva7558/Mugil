#include <stdio.h>

int main(void) {
  char ca;
  scanf("%s",&ca);
  if(ca>='a'&&ca<='z')
  {
    if (ca == 'a' || ca == 'A' || ca == 'e' || ca == 'E' || ca == 'i' || ca == 'I' || ca =='o' || ca=='O' || ca == 'u' || ca == 'U')
  {
    printf("Vowel");
  }
  else
  {
    printf("Consonant");
  }
  }

  else
  {
    printf("invalid");
  }
  return 0;
}
