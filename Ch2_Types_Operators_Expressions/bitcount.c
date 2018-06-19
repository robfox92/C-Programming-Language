#include<stdio.h>

// bitcount: count number of 1 bits in input
//
int bitcount(unsigned x)
{
  int b=0;
  
  while (x !=0){
    x&=(x-1);
    ++b;
  }


  return b;
};

int main(){
  int n;
  scanf("%d",&n);
  
  printf("\n%i 1 bits in %i\n",bitcount(n),n);

  return 0;
}
