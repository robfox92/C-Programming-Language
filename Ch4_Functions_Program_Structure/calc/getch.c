#include <stdio.h>
#define BUFSIZE 100

char buf[BUFSIZE]
int bufp = 0;

// get a (possibly pushed back) character
int getch(void){
  return (bufp > 0) ? buf[--bufp] : getchar();
}

// push a character back on input
void ungetch(int){
  if (bufp >= BUFSIZE){
    printf("ungetch: too many characters");
  }
  else{
    buf[bufp++] = c;
  }

}
