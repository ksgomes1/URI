#include <stdio.h>
int main() {
  
  double renda, imposto;
  scanf("%lf", &renda);
  if(renda <= 2000.00) {
    printf("Isento\n");
  }
  if(renda > 2000.00 && renda <= 3000.00) {
    imposto = ((renda - 2000) * 8) / 100;
    printf("R$ %.2lf\n", imposto);
  }
  if(renda > 3000.00 && renda <= 4500.00) {
    imposto = ((999.99 * 8) / 100) + (((renda - 3000.00) * 18) / 100);
    printf("R$ %.2lf\n", imposto);
  }
  if(renda > 4500.00) {
    imposto = ((999.99 * 8) / 100) + ((1499.99 * 18) / 100) + (((renda - 4500.00) * 28) / 100);
    printf("R$ %.2lf\n", imposto);
  }

  return 0;
}