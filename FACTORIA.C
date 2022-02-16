/*Writing the factorial*/
#include<stdio.h>
#include<stdlib.h>

void main()

{

   int a,b;

   int fac=1;

   printf("Enter a no.");

   scanf("%d",&b);

   for (a=1;a<=b;a++)

   {

	fac=a*fac;

   }

     printf("The factorial of the entered no. is %d",fac);

}
