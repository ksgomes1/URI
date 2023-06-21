#include <stdio.h>
#include <string.h>
int igual(char *a) {
  int aux = strlen(a) - 1;
  char b = a[0];
  char c = a[aux];
  if(b == c) {
    return 1;
  } else {
    return 0;
  }
}
int main() {
  char *s1 = "abcd";
  char *s2 = "abca";
  printf("%d\n", igual(s1));
  printf("%d\n", igual(s2));
  return 0;
}