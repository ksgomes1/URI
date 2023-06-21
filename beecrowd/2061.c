#include <stdio.h>
#include <string.h>
int main() {
  int pag, ac, ret;
  char a[10];
  scanf("%d %d", &pag, &ac);
  while(ac--) {
    scanf("%s", a);
    ret = strcmp(a, "fechou");
    if(ret == 0) {
      pag += 1;
    }
    ret = strcmp(a, "clicou");
    if(ret == 0) {
      pag -= 1;
    }
  }
  printf("%d\n", pag);
  return 0;
}