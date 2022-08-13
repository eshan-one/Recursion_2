#include <stdio.h>
#include<stdlib.h>

int f1(int);
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
  f1(N);
  printf("\nThe sum of first %d even natural numbers is %d",N,f1(N));
}
  
  
  
  return 0;
}

int f1(x)
{
  int s;
  s = x*=2;
  
   return sum(s);
  
}

int sum(int n)
{
  
  
  

  if(n==2)
  {
    return 2;
  }

  return n + sum(n-2);
  }
    

  
