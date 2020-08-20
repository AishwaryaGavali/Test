#include<stdio.h>
#include<conio.h>
int main()
{
   int a[2][2],r,c,sum;
   
   printf("enter 4 nos");
   for(r=0;r<2;r++)
   {
     for(c=0;c<2;c++)
     scanf("%d",&a[r][c]);
     }
     printf("displaying the sum of row\n");
          printf("Aishwarya is here\n");

     for(r=0;r<2;r++)
     {
      sum=0;
      for(c=0;c<2;c++)
      {
	sum=sum+a[r][c];
	printf("\t%d",a[r][c]);
      }

     printf("=\t%d",sum);
     printf("\n");

    }

      return 0;
     }
