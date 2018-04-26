#include <stdio.h>

#define MAXLINE 1000 //maximum input line size

int max;
char line[MAXLINE];
char longest[MAXLINE];

int get_line(void);
void copy(void);

//print longest input line

int main()
{
  int len = 0;           //current line length
  extern int max;
  extern char longest[];

  max = 0

  while ((len = get_line()) > 0){ //get the line
    if (len > max){                           //if the length is longer than the previous
      max = len;                              //longest, copy it to `longest` and save the length
      copy();
    }
  }
  if (max > 0){ //if there was a line, print it
    printf("%s",longest);
  }
  return 0;
}

// read a line in to s, return the length
int get_line(void){
  int c,i;
  extern char line[];

  for (i = 0; 
      i < MAXLINE-1 
      && (c = getchar()) != EOF 
      && c != '\n'; ++i){
    line[i] = c;       //move through the input until you hit a EOF or \n
  }
  if (c == '\n'){
    line[i] = c;       //if the line is a single newline char
    ++i;            //increment i
  }
  line[i] = '\0';
  return i;
}

//copy `from` into `to`, assuming `to` is big enough
//returns nothing (void)
//relies on input being terminated by \0
void copy(void){
  int i = 0;
  extern char line[], longest[];

  while ((line[i] = longest[i]) != '\0'){
    ++i;
  }
}
