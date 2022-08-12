#include<stdio.h>
#include<stdlib.h>

int HCF(int x,int y);

int main()
{
  int a,b;
  printf("Enter two numbers:\n");
  scanf("%d%d",&a,&b);
  if(a>b)
  {
    HCF(a,b);
    printf("\n%d",HCF(a,b));
  }

  else{
    HCF(b,a);
    printf("\n%d",HCF(b,a));
  }

  

  return 0;
}

int HCF(int x, int y)
{
  if(y==0)
  return x;   
  
   return HCF(y,x%y);

}
  
