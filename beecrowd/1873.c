#include <stdio.h>
#include <string.h>
int resultado(char a[],char b[]) {
  
  if(strcmp(a, b) == 0) {
    return 0;
  }
  if(strcmp(a, "tesoura") == 0 && strcmp(b, "papel") == 0) {
    return 1;
  }
  if(strcmp(a, "papel") == 0 && strcmp(b, "pedra") == 0) {
    return 1;
  }
  if(strcmp(a, "pedra") == 0 && strcmp(b, "lagarto") == 0) {
    return 1;
  }
  if(strcmp(a, "lagarto") == 0 && strcmp(b, "spock") == 0) {
    return 1;
  }
  if(strcmp(a, "spock") == 0 && strcmp(b, "tesoura") == 0) {
    return 1;
  }
  if(strcmp(a, "tesoura") == 0 && strcmp(b, "lagarto") == 0) {
    return 1;
  }
  if(strcmp(a, "lagarto") == 0 && strcmp(b, "papel") == 0) {
    return 1;
  }
  if(strcmp(a, "papel") == 0 && strcmp(b, "spock") == 0) {
    return 1;
  }
  if(strcmp(a, "spock") == 0 && strcmp(b, "pedra") == 0) {
    return 1;
  }
  if(strcmp(a, "pedra") == 0 && strcmp(b, "tesoura") == 0) {
    return 1;
  }
  else {
    return 2;
  }
}

int main() {
  
  int c, d;
  char a[10], b[10];
  scanf ("%d", &c);
  while(c--) {
    scanf("%s %s", a, b);
    d = resultado(a, b);
    if(d == 0) {
      printf("empate\n");
    }
    if(d == 1) {
      printf("rajesh\n");
    }
    if(d == 2) {
      printf("sheldon\n");
    }
  }
  
  return 0;
}