#include <stdio.h>

// Count digits, white space chars, other chars
//
int main()
{
  int c, i, nwhite, nother;
  int ndigit[10];

  nwhite = nother = 0;

  for (i = 0; i < 10; ++i){
    ndigit[i] = 0;
  }

  while ( ( c = getchar() ) != EOF){
    if (   c >= '0'    // if the char is a digit
        && c <= '9'){
      ++ndigit[c-'0']; // increment the digit counter
    }
    else if (   c == ' '
             || c == '\n'
             || c == '\t'){
      ++nwhite;
    }
    else{
      ++nother;
    }
  }
  printf("digits =");
  for ( i = 0; i < 10; ++i ){
    printf(" %d", ndigit[i]);
  }
  printf("\nwhite space = %d", nwhite);
  printf("\nother chars = %d\n", nother);


}
