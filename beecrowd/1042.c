#include <stdio.h>
void ordem(int v[3]) {
  int i, j, aux;
  for(i = 0; i < 3; i++){
     for(j = 0; j < 3; j++){
        if(v[i] < v[j]){
          aux = v[j];
          v[j] = v[i];
          v[i] = aux;
        }
      }
    }
  printf("%d\n%d\n%d\n", v[0], v[1], v[2]);
}

int main() {

    int v[3], a[3], i, m;
    scanf("%d %d %d", &v[0], &v[1], &v[2]);
    a[0] = v[0];
    a[1] = v[1];
    a[2] = v[2];
    ordem(v);
    printf("\n%d\n%d\n%d\n", a[0], a[1], a[2]);

    return 0;
}