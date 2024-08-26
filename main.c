#include <stdio.h>

int main(void) {

  int n;
  float l, q;

  scanf("%d%f%f", &n, &l, &q);

  char c;
  while ((c = getchar()) != '\n' && c != EOF) {
  }

  char nomes[n][12];
  for (int i = 0; i < n; i++)
    scanf("%s", nomes[i]);

  float res = l;
  int rico = 0;
  while (res > q) {
    res = res - q;
    rico++;
    if (rico == n)
      rico = 0;
  }

  printf("%s %.1f", nomes[rico], res);

  return 0;
}