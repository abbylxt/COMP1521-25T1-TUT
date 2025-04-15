#include <stdio.h>

int main(void) {
  int i = 0;
  while (i < 10) {
    printf("%d\n", i);
    i++;
  }

  while (i < 20) {
    printf("%d\n", i + 1);
    i++;
  }
  return 0;
}

#include <stdio.h>

int main(void) {
  for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
  }

  return 0;
}