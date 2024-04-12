//To check whether the number is prime or not
#include <stdio.h>
void main()
{
	int num,i=2,prime=0;
	printf("Enter your number");
	scanf("%d",&num);
	while (i<num)	
	{
		if(num%i==0)
			prime=1;
			break;
	}
	i++;
	if (prime==1)
		printf("Enterd number is not prime\n");
	else if (num==1)
		printf("Entered number is neither prime nor composite\n");
	else if (num==2)
		printf("Entered number is prime \n");
	else
		printf("Enterd number is  prime\n");
}
