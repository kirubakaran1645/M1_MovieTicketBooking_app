#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void bookinghistory(int *array, int amount, int slection)
{
	int i, j;
	printf("\n                                DISPLAY-SCREEN\n\n");
	for (i = 1; i <= 100; i++)
	{
		if (array[i] == 0)
			printf("%d\t", i);
		else
			printf("*\t", i);
		if (i % 10 == 0)
			printf("\n\n");
	}
	printf("Enter your name: ");
	scanf(" %19[^\n]%*[^\n]", &person[count].name);
	printf("Enter your mobile number: ");
	scanf("%u", &person[count].phone);
	printf("Enter the seat number? ");
	scanf("%d", &j);
	if (j > 100 || j < 1)
	{
		printf("Seat number is unavailable\n");
		printf("Please re-enter seat number: ");
		scanf("%d", &j);
	}
	if (array[j] == 1)
	{
		printf("Sorry, this ticket is already booked! Please select another seat.\n");
		scanf("%d", &j);
	}
	else
		array[j] = 1;
	person[count].seat = j;
	if (slection == 1)
		ticket1(j, person[count].name, TicketGenerateId, amount);
	else if (slection == 2)
		ticket2(j, person[count].name, TicketGenerateId, amount);
	else
		ticket3(j, person[count].name, TicketGenerateId, amount);
	TicketGenerateId++;
}
