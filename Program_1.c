#include <stdio.h>
#include<stdlib.h>

int sum(int);
int main() {
  int N;
  printf("Enter any number:\n");
  scanf("%d", &N);

  sum(N);
  printf("\nThe sum of first %d natural numbers is %d",N,sum(N));
  return 0;
}

int sum(int n)
{
  
  if(n==1)
{
  return 1;
  
}
   return n + sum(n-1);
   
  }



