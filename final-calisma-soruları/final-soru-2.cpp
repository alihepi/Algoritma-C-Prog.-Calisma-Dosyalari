#include<stdio.h>
main()
{
   int i,j;
   for(i=1; i<=4; i++)
   {
      for(j=1; j<=4; j++)
         printf("%3d", i*j+1);
      printf("\n");
   }
}

