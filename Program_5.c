#include <stdio.h>
#include<stdlib.h>


int count(int);

int main()
{
  int N;
  printf("Enter any number:\n");
  scanf("%d", &N);

  count(N);

  printf("\nThe sum of the digits of %d is %d",N,count(N));

  return 0;
}
int count(int n )
{
  int sum=0, rem ;

  rem = n%10;

  sum = sum + rem;

  if(n==0)
  {
    return 0;
  }
  else
  {
     return sum + count(n/10); 
  }

  
}
