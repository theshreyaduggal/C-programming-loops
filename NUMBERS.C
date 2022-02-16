/*Writing numbers*/
#include<stdio.h>
#include<stdlib.h>

void main()

{

   int a,b,c;

   printf("Enter a no.");

   scanf("%d",&a);

   for (b=0; a>=b; b=b+2)

   {

	  c=b+1;

	  printf("%d	%d \n",b,c);

   }

}