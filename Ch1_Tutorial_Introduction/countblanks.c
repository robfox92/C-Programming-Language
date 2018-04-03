#include <stdio.h>

int main()
{
  int c,n1;
  n1=0;

  while (( c = getchar() ) != EOF )
    if (   (c == '\n') // format with the pipe on the left
        || (c == '\t') // for ease of reading
        || (c == ' ')
       ){
      ++n1;
    }
  printf("%d\n", n1);
}
