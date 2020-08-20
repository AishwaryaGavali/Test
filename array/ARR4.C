//wap input 3 no.s & calculate their addition//
#include<stdio.h>
#include<conio.h>
int main()
{
  int a[3],i,sum=0;
  
  printf("enter 3 nos:\n");
  for(i=0;i<3;i++)
  {
  scanf("%d",&a[i]);
  }
  //sum=0;
  for(i=0;i<3;i++)
  {
    sum=sum+a[i];
  }
  printf("sum=%d",sum);
  getch();
  }
