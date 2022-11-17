#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int payCode;
	int managers = 0;
	int hWorkers = 0;
	int cWorkers = 0;
	int pWorkers = 0;
	int pieces;
	double mSalary;
	double hSalary;
	double cSalary;
	double pSalary;
	double hours;
	double otPay;
	double otHours;
	double pay;

	printf("Enter paycode(-1 to end):");
	scanf("%d", &payCode);

	while (payCode != -1) {
		switch (payCode)
		{
		case 1:
			printf("Manger selected.\n");
			printf("Enter weekly salary:");
			scanf("%lf", &mSalary);

			printf("The manager's pay is $%.2f\n", mSalary);

			++managers;
			break;

		case 2:
			printf("Hourly worker selected.\n");
			printf("Enter the hourly salary:");
			scanf("%lf", &hSalary);

			printf("Enter the total hours worked:");
			scanf("%lf", &hours);

			if (hours > 40.0) {
				otHours = hours - 40;
				otPay = hSalary * 1.5*otHours + hSalary * 40.0;

				printf("worker has worked %.lf overtime hours.\n", otHours);
				printf("work pay is $%.2f\n", otPay);
			}
			else {
				pay = hSalary * hours;
				printf("Worker's pay is $%.2f\n", otPay);
			}

			++hWorkers;
			break;

		case 3:
			printf("Commission worker selected.\n");
			printf("Enter gross weeekly sales:");
			scanf("%lf", &cSalary);

			pay = 250.0 + 0.057*cSalary;
			printf("Commission Work's pay is $%.2f\n", pay);

			++cWorkers;
			break;

		case 4:
			printf("Piece worker selected.\nEnter number of pieces:");
			scanf("%d", &pieces);

			printf("Enter wage per piece:");
			scanf("%lf", &pSalary);

			pay = pieces * pSalary;
			printf("Piece Work's pay is $%.2f\n", pay);

			++pWorkers;
			break;

		default:
			printf("Invalid pay code.\n");
			break;
		}
		printf("\nEnter paycode (-1 to end):");
		scanf("%d", &payCode);
	}
	printf("\n");
	printf("Total number of managers paid:%d\n", managers);
	printf("Total number of hourly workers paid:%d\n", hWorkers);
	printf("Total number of commissi0n workers paid:%d\n",cWorkers);
	printf("Total number of piece workers paid:%d\n", pWorkers);

	return 0;
}