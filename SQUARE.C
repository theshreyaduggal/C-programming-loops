/*To find sum of squares*/
#include<stdio.h>
#include<stdlib.h>

void main()

{
  int a,b;

  int sum=0;

  printf("Enter a no.");

  scanf("%d",&b);

  for (a=1; a<=b; a++)

  {

	sum=(a*a)+sum;

  }

	printf("%d",sum);

}