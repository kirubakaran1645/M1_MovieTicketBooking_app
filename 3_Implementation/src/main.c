#include <stdio.h>
#include <stdlib.h>
#include "moviedetails.c"
#include "decleration.c"
#include "changepricelist.c"
#include "bookinghistory.c"
#include "moviechoice.c"
#include "cancelticket.c"
#include "ticket1.c"
#include "ticket2.c"
#include "ticket3.c"
#include "cancelmovielist.c"
#include "getmovielist.c"


int main()
{
	int **seat, choice, amount = 100, slection, i;
	seat = (int **)calloc(101, sizeof(int *)); 
	for (i = 0; i < 3; i++)
		*(seat + i) = (int *)calloc(101, sizeof(int));
	int x;
	while (x != 4)
	{
		choice = moviechoice();
		switch (choice)
		{
		case 1:
			slection = getmovielist();
			bookinghistory(seat[slection - 1], amount, slection);
			count++;
			break;
		case 2:
			slection = cancelmovielist();
			cancelticket(seat[slection - 1]);
			break;
		case 4:
			x = 3;
			break;
		case 3:
			amount = changeticketprice(amount);
			break;

		default:
			printf("Option unavailable\n");
			break;
		}
	}
}


