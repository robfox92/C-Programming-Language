#include<stdio.h>

/* Print Fahreinheit-Celsius Table for f = 0,20,...,300 */

int main()
{
  float fahr, cels;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  printf("Deg F\t Deg C\n");
  while (fahr <= upper){
    cels=5*(fahr-32)/9;
    printf("%5.0f\t%6.1f\n",fahr,cels);
    fahr = fahr+ step;
  }

}
