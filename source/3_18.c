#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double sales;
	double wage;

	printf("Enter sales in dollars(-1 to end): ");
	scanf("%lf", &sales);

	while (sales != -1.0) {
		wage = 200.0 + 0.09*sales;

		printf("Salary is:$%.2f\n\n", wage);

		printf("Enter sales in dollars(-1 to end): ");
		scanf("%lf", &sales);
	}
	return 0;
}