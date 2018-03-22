#include <stdio.h>

// count characters in input
int main(){
  long nc = 0; //store the character count as a long int, init it as 0

  while (getchar() != EOF) // while the user hasn't entered an EOF
  {
    ++nc;                  // increment the character count
  }
  printf("%ld\n",nc);      // %ld tells printf we are printing a long int
}
