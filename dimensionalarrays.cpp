#include <stdio.h>
#include <stdlib.h>
int main()

{
  float a[2][2], b[2][2], resultado[2][2];

  printf("Insira os elementos da 1ª matriz\n");
  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    {
      printf("Entrar a%d%d: ", i + 1, j + 1);
      scanf("%f", &a[i][j]);
    }

  printf("Insira os elementos da 2ª matriz\n");
  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    {
      printf("Entrar b%d%d: ", i + 1, j + 1);
      scanf("%f", &b[i][j]);
    }

  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    {
      resultado[i][j] = a[i][j] + b[i][j];
    }

  printf("\nSoma da matriz:");

  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    {
      printf("%.1f\t", resultado[i][j]);

      if (j == 1)
        printf("\n");
    }
  return 0;
}
