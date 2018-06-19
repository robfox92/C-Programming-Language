#include<stdio.h>

// bitcount: count number of 1 bits in input
//
int bitcount(unsigned x)
{
  int b;

  for (b = 0; x != 0; x >>=1){
    if (x & 1){
      b++;
    }
  }
  return b;
};

int main(){
  int n;
  scanf("%d",&n);
  
  printf("\n%i 1 bits\n",bitcount(n));

  return 0;
}
