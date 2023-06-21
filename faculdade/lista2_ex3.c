#include <stdio.h>
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