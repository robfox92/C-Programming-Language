#include <stdio.h>

#define IN  1 // inside a word
#define OUT 0 // outside a word

// count words, lines and chars in input

int main()
{
  int c, nl, nw, nc, state;
  // the state tracks whether or not we are in a word or not
  // use this to track the number of words
  state = OUT;
  nl = nw = nc = 0; // init vars to 0
  while ((c = getchar()) != EOF){
    // while we dont have an EOF entered, increment the char count
    ++nc;
    if (c == '\n'){ 
      // if there is a newline char, increment newline count
      ++nl;
    }
    if (   c == ' '
        || c == '\n'
        || c == '\t'){
      // if we get a blank, newline or tab, set the state to 'not in a word'
      state = OUT;
    }
    else if (state == OUT){
      // otherwise, if the state was 'not in a word'
      // change the state to 'in a word' and increment the word counter
      state = IN;
      ++nw;
    }
  }
  printf("%d %d %d\n", nl, nw, nc);
}
