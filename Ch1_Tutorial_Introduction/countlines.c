#include <stdio.h>
// Counts lines in input
int main()
{
  int c,n1;

  n1=0;
    while ((c=getchar()) != EOF){
      if (c == '\n'){ // character in single quotes is a character constant
        ++n1;         // represents the integer value of the constant
                      // more preferable to use the char const over the actual integer value
                      // as the integer value may change between text encoding schemes
      }
    }
  printf("%d\n", n1);
}
