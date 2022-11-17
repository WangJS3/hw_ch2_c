#include<stdio.h>

int maim(void)
{
	int count = 0;
	long int side1;
	long int side2;
	long int hypotenuse;
	long int hyptSquared;
	long int sidesSquared;

	for (side1 = 1; side1 <= 500; side1++) {
		for (side2 = 1; side2 <= 500; side2++) {
			for (hypotenuse = 1; hypotenuse <= 500; hypotenuse++) {
				hyptSquared = hypotenuse*hypotenuse;
				sidesSquared = side1 * side1 + side2 * side2;

				if (hyptSquared == sidesSquared) {
					printf("%ld %ld %ld\n", side1, side2, hypotenuse);
					++count;
				}
			}
		}
	}
	printf("A total of %d triples were found.\n", count);

	return 0;
}