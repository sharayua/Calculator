/*
 ============================================================================
 Name        : Calculator.c
 Author      : Sharayu Amritkar
 Version     :
 Copyright   : Roll No.:3004
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int add(int num1, int num2);
int sub(int num1, int num2);
int main(void) {

	int num1,num2;
	int res;
	int ch;


	printf("\n========MENU============\n1,Add\n2.Subtract");
	printf("\nEnter choice :: ");
	scanf("%d", &ch);

	printf("\nEnter num 1 :: ");
	scanf("%d", &num1);

	printf("\nEnter num  :: ");
	scanf("%d", &num2);

	if(ch==1)
	res = add(num1, num2);
	else if(ch==2)
	res = add(num1, num2);
	else
	printf("\nWrong choice!");
	printf("\nResult :: %d",res);
	return EXIT_SUCCESS;
}

int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
	}
