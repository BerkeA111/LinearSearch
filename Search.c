#include <stdio.h>
int main(void) {
	int numberarray = 0, c = 0; //uninitiliazed variable error
	/*printf("Enter number of numbers in your array: ");
	scanf_s("%d", &numberarray);*/
	printf("\nEnter the numbers one by one\n");
	int array[10]; //array of 10 elements, cant create dynamic array in C
	for (int a = 0; a <10; a++) {
		scanf_s("%d", &array[a]);
	}
	printf("Enter search number: ");
	int searchnumber;
	scanf_s("%d", &searchnumber);
	printf("\n");
	for (int b = 0; b < 10; b++) { //linear search
		if (array[b] == searchnumber) {
			printf("Number found at position %d\n", b + 1);
			c++;
		}
	}
	if (c == 0)
		printf("Number not found\n");
	else printf("Number of times the number is found: %d\n", c);

}