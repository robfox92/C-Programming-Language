#include<stdio.h>

/* Print Fahreinheit-Celsius Table for f = 0,20,...,300 */

int main()
{
  int fahr, cels;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  while (fahr <= upper){
    cels=5*(fahr-32)/9;
    printf("%d\t%d\n",fahr,cels);
    fahr = fahr+ step;
  }

}