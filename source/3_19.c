#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	double principal;
	double rate;
	double interest;
	int term;

	printf("Enter loan princupal(-1 to end): ");
	scanf("%lf", &principal);

	while (principal != -1.0) {
		printf("Enter interest rate: ");
		scanf("%lf", &rate);

		printf("Enter term of the loan in days: ");
		scanf("%d", &term);

		interest = principal * rate*term / 365.0;
		printf("The interest charge is $%2.f\n\n", interest);

		printf("Enter loan princupal(-1 to end): ");
		scanf("%lf", &principal);
	}
	return 0;
}