#include <stdio.h>
#include<stdlib.h>

int f1(int);
int sum(int);

int main() {
  int N;
  printf("Enter any number:\n");
  scanf("%d", &N);

  f1(N);
  printf("\nThe sum of first %d odd natural numbers is %d",N,f1(N));
  return 0;
}

int f1(x)
{
  int s;
  s = x*=2;
  s-=1;
   return sum(s);
  
}

int sum(int n)
{
  
  
  

  if(n==1)
  {
    return 1;
  }

  return n + sum(n-2);
  }
    

  
