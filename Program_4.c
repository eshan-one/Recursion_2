#include <stdio.h>
#include<stdlib.h>

int sum(int);

int main() {
  int N;

  
  printf("Enter any natural number:\n");
  scanf("%d", &N);

  if(N==0)
  {
    printf("Invalid");
  }
else
{
  sum(N);
  printf("\nThe sum of the squares of the first %d natural numbers is %d",N,sum(N));
}
  
  
  
  return 0;
}


int sum(int n)
{
  
  
  

  if(n==1)
  {
    return 1;
  }

  return n*n + sum(n-1);
  }
    

  
