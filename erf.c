#include <math.h>   //erf, sqrt
#include <stdio.h>  //printf

int main() {
  int a = 1;
  int tot = a + 34.0;
  printf("Il totale che ho calcolato è: %d\n", tot);
  printf(
      "The integral of a Normal(0, 1) distribution between -1.96 and 1.96 is: "
      "%g\n",
      erf(1.96 * sqrt(1 / 2.)));
}
