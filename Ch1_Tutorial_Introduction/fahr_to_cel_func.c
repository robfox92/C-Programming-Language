#include<stdio.h>

/* Print Fahreinheit-Celsius Table for f = 0,20,...,300 */

# define LOWER 20   // lower table limit
# define UPPER 300  // upper table limit
# define STEP 20    // table step size

float fahr_to_cel(float fahr){
  float cel;
  cel = (5.0/9.0)*(fahr-32);
  return cel;
}


int main()
{
  int fahr;

  printf("Deg F\t Deg C\n");

  for (fahr = LOWER; fahr <= UPPER; fahr += STEP){
    printf("%3d %6.1f\n",fahr,fahr_to_cel(fahr));
  }

}
