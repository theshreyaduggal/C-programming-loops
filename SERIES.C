/*Sum of fractional series*/
#include<stdio.h>
#include<stdlib.h>

void main()

{

    int num;

    float a,sum;

    printf("Enter a number");

    scanf("%d",&num);

    for (a=1; a<num; a++)

    {

	sum=(a/(a+1))+sum;

    }

	printf("The sum is: %f",sum);


}

