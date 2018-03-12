#include <stdio.h>

// Copy input to output
// program ends when end of file character is passed (CTRL+D)
int main()
{
  int c;           // store the character as an integer

  c=getchar();    // get the character from stdin

  while (c!=EOF){ // while the user has not entered an EOF char
    putchar(c);   // print the character they enter
    c=getchar();  // get a new character from stdin
  }
  printf("You entered an EOF char\n");
  putchar(EOF);
  printf("\n");
}
