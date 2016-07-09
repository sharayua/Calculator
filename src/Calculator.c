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
void printMenu();
int getInput(int num);
int getChoice(int op);

int main(void) {

	int num1,num2;
	int res;int op;

	printMenu();
	op = getChoice(op);

	num1 = getInput(num1);
	num2 = getInput(num2);

	if(op==1)
	res = add(num1, num2);
	else if(op==2)
	res = add(num1, num2);
	else
	printf("\nWrong choice!");

	printf("\nResult :: %d",res);
	return EXIT_SUCCESS;
}

int getChoice(int op) {
	printf("\nEnter choice :: ");
	scanf("%d", &op);
	return op;
}

void printMenu()
{
	printf("\n========MENU============\n1,Add\n2.Subtract");

}

int getInput(int num) {
	printf("\nEnter num 1 :: ");
	scanf("%d", &num);
	return num;
}

int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

int sub(int num1, int num2)
{
	int diff = num1 - num2;
	return diff;
}


