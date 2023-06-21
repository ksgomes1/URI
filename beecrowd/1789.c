#include <stdio.h>
int main() {

  int n;
  while(scanf("%d", &n) != EOF) {
    int v[n], vm;
    vm = 0;
    for(int i=0; i<n; i++) {
      scanf("%d", &v[i]);
      if(v[i]>vm) {
        vm = v[i];
      }
    } if(vm<10) {
      printf("1\n");
    } else if(vm<20 && vm>10) {
      printf("2\n");
    } else if(vm>=20) {
      printf("3\n");
    }
  }

  return 0;
}