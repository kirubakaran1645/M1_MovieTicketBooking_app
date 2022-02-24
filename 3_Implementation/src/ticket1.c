#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
void ticket1(int choice, char name[10], int TicketGenerateId, int amount)
{
	system("cls");
	printf("\n\n");
	printf("\t-----------------THEATER BOOKING TICKET----------------\n");
	printf("\t============================================================\n");
	printf("\t Booking ID : %d \t\t\tShow Name : No Time To Die in Fun Cinemas \n", TicketGenerateId);
	printf("\t Customer  : %s\n", name);
	printf("\t\t\t                              Date      : 11-02-2022\n");
	printf("\t                                              Time      : 02:00pm\n");
	printf("\t                                              Hall      : 07\n");
	printf("\t                                              seats No. : %d  \n", choice);
	printf("\t                                              amount . : %d  \n\n", amount);
	person[count].id = TicketGenerateId;
	printf("\t============================================================\n");
	return;
}
