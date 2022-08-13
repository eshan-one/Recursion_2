#include <stdio.h>
#include<stdlib.h>

long long int fact(long long int);

int main() {
  long long int N;

  
  printf("Enter any natural number:\n");
  scanf("%lld", &N);
  
  fact(N);
  printf("\nThe factorial of %lld is %lld",N,fact(N));

  
  
  
  return 0;
}


long long int fact(  long long int n)
{
  
  
  

  if(n==1 || n==0)
  {
    return 1;
  }

  return n * fact(n-1);
  }
    

  
