#include <stdio.h>

// Copy input to output
// program ends when end of file character is passed (CTRL+D)
int main()
{
  int c;                         // store the character as an integer
  
  while ( (c=getchar()) != EOF){ // while the user has not entered an EOF char
    putchar(c);                  // print the character they enter
  }
  printf("You entered an EOF char\n");
  putchar(EOF);
  printf("\n");
}
