/*
 * Jazminna_Smirni_ex1.c
 *
 *  Created on: Mar 26, 2024
 *      Author: jsmirni
 */
#include <stdio.h>

int
main(void)
{
	setvbuf(stdout, NULL,_IONBF, 0);
	int prime[6];
	int sum = 0;

	printf("Enter the first 6 prime numbers:\n");

	for(int i = 0; i < 6; i++){
		scanf("%d", &prime[i]);
		sum += prime[i];
	}

	printf("The total sum of inputed prime numbers = %d\n", sum);
	return 0;
}

