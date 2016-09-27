#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a;
	float b;
	float c;
	int d;
	printf("select the number of the operation you want to do \n");
	printf("1.- sum: \n");
	printf("2.- substraction: \n");
	printf("3.- multiplication: \n");
	printf("4.- division: \n");
	scanf("%i", &d);
	printf("enter first number: \n");
	scanf("%f",&a);
	printf("enter second number: \n");
	scanf("%f",&b);
	switch(d)
	{
		case 1:
		c=a+b;
		break;
		case 2:
		c=a-b;
		break;
		case 3:
		c=a*b;
		break;
		case 4:
		c=a/b;
		break;
	};
	printf("the result is: %f",c);
	return 0;
}
