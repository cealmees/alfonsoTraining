#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a;
	float b;
	float c;
	printf("enter first number: \n");
	scanf("%f",&a);
	printf("enter second number: \n");
	scanf("%f",&b);
	c=a-b;
	printf("the result is: %f",c);
	return 0;
}
