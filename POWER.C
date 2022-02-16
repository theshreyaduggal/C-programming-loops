/*To calculate powers*/
#include<stdio.h>
#include<stdlib.h>

void main()

{

   int m,n,a;

   int pow=1;

   printf("Enter no.");

   scanf("%d",&m);

   printf("Enter power");

   scanf("%d",&n);

   for (a=1; a<=n; a++)

   {

     pow= m*pow;

   }

   printf("The answer is: %d",pow);

}