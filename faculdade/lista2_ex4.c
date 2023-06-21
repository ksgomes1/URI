#include <stdio.h>
#include <stdlib.h>
 typedef struct {
  int nUSP;
  double p1, p2, eps, listas;
} Aluno;
double nota(Aluno a) {
  double media = 0.7 * ((a.p1 + a.p2) / 2) + a.eps + a.listas;
  return media;
}
int aprovados(Aluno alunos[], int tamanho) {
  int aprovados = 0;
  for(int i = 0; i < tamanho; i++) {
    double media = nota(alunos[i]);
    if (media >= 5) {
      aprovados++;
    }
  }
  return aprovados;
}
int main() {
  int n;
  printf("Qual o numero de alunos?\n");
  scanf("%d", &n);
  Aluno *alunos = (Aluno*)malloc(sizeof(Aluno) * n);
  for(int i = 0; i < n; i++) {
    printf("Qual o nUSP do aluno?\n");
    scanf("%d", &alunos[i].nUSP);
    printf("Quais as notas do aluno? (p1, p2, eps e listas)\n");
    scanf("%lf %lf %lf %lf", &alunos[i].p1, &alunos[i].p2, &alunos[i].eps, &alunos[i].listas);
  }
  printf("%d", aprovados(alunos, n));
  return 0;
}