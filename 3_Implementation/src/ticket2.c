#include <stdio.h>
#include <stdlib.h>
#include "moviedetails.c"
#include "decleration.h"
#include <strings.h>
struct moviedetails person[300];
void ticket2(int choice, char name[10], int TicketGenerateId, int amount)
{
	system("cls");
	printf("\n\n");
	printf("\t-----------------THEATER BOOKING TICKET----------------\n");
	printf("\t============================================================\n");
	printf("\t Booking ID : %d \t\t\tShow Name : Quiet Place in Fun Cinemas\n", TicketGenerateId);
	printf("\t Customer  : %s\n", name);
	printf("\t\t\t                              Date      : 08-02-2022\n");
	printf("\t                                              Time      : 09:00pm\n");
	printf("\t                                              Hall      : 03\n");
	printf("\t                                              seats No. : %d  \n", choice);
	printf("\t                                              amount . : %d  \n\n", amount);
	person[count].id = TicketGenerateId;
	printf("\t============================================================\n");
	return;
}