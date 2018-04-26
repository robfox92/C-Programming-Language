#include <stdio.h>

#define MAXLINE 1000 //maximum input line size

int get_line( char line[], int maxline );
void copy( char to[], char from[] );

//print longest input line

int main()
{
  int len = 0;           //current line length
  int max = 0;           //maximum line length seen
  char line[MAXLINE];    //current input line
  char longest[MAXLINE]; //longest input line we know about

  while ((len = get_line(line, MAXLINE)) > 0){ //get the line
    if (len > max){                           //if the length is longer than the previous
      max = len;                              //longest, copy it to `longest` and save the length
      copy(longest,line);
    }
  }
  if (max > 0){ //if there was a line, print it
    printf("%s",longest);
  }
  return 0;
}

// read a line in to s, return the length
int get_line(char s[], int lim){
  int c,i;

  for (i = 0; 
      i < lim-1 
      && (c = getchar()) != EOF 
      && c != '\n'; ++i){
    s[i] = c;       //move through the input until you hit a EOF or \n
  }
  if (c == '\n'){
    s[i] = c;       //if the line is a single newline char
    ++i;            //increment i
  }
  s[i] = '\0';
  return i;
}

//copy `from` into `to`, assuming `to` is big enough
//returns nothing (void)
//relies on input being terminated by \0
void copy(char to[], char from[]){
  int i = 0;
  while ((to[i] = from[i]) != '\0'){
    ++i;
  }
}
