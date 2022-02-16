/*Writing the sum of numbers*/
#include<stdio.h>
#include<stdlib.h>

void main()

{

   int a,b;

   int sum=0;

   printf("Enter a no.");

   scanf("%d",&b);


   for(a=0; a<=b; a++)

   {

	sum=a+sum;


   }

	printf("*%d*", sum);
}