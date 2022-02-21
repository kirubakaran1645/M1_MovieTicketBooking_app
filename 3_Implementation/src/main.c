#include <stdio.h>
#include <stdlib.h>
#include "moviedetails.c"
#include "decleration.c"
#include <strings.h>
struct moviedetails person[300];
int count = 0;
int TicketGenerateId = 1000;
int main()
{
	int **seat, choice, amount = 100, slection, i;
	seat = (int **)calloc(101, sizeof(int *));
	for (i = 0; i < 3; i++)
		*(seat + i) = (int *)calloc(101, sizeof(int));
	int x;
	while (x != 3)
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
		case 3:
			x = 3;
			break;
		default:
			printf("Option unavailable\n");
			break;
		}
	}
}

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
int moviechoice(void)
{
	int choice;
	printf("                 Simple Movie Ticket Booking System\n");
	printf(" ==================================================================\n");
	printf("||             1- Book Ticket:          	                  ||\n");
	printf("||             2- Cancel Ticket:		                  ||\n");
	printf("||             3- Exit:       	                      	          ||\n");
	printf("||================================================================||\n");
	printf("Enter your option");
	scanf("%d", &choice);
	return choice;
}
void cancelticket(int *array)
{
	int Cseat, i, stop;
	printf("Please enter id of ticket: ");
	scanf("%d", &Cseat);
	for (i = 0; i < 300; i++)
	{
		if (Cseat == person[i].id)
		{
			stop = 5;
			system("cls");
			printf("%s your seat is %d cancelled", person[i].name, person[i].seat);
			array[person[i].seat] = 0;
			i = 300;
		}
	}
	if (stop != 5)
		printf("Ticket ID is incorrect please enter correct one to cancel ticket: \n");
}
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

int getmovielist(void)
{
	int i;
	system("cls");
	printf("\t\t\tWhich Moview you want to see?\n");
	printf("\t\t\t----------------------------\n\n");
	printf("\t\t\tpress 1 for No Time To Die \n\n");
	printf("\t\t\tpress 2 for A Quiet Place\n\n");
	printf("\t\t\tpress 3 for Spider-Man: No Way Home\n");
	scanf("%d", &i);
	system("cls");
	return i;
}
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
int cancelmovielist(void)
{
	int i;
	printf("\t\t\twhich movie ticket you want to cancel\n");
	printf("\t\t\t-------------------------------------\n");
	printf("\t\t\tpress 1 for No Time To Die \n\n");
	printf("\t\t\tpress 2 for A Quiet Place\n\n");
	printf("\t\t\tpress 3 for Spider-Man: No Way Home\n");
	scanf("%d", &i);
	return i;
}
void ticket3(int choice, char name[10], int TicketGenerateId, int amount)
{
	system("cls");
	printf("\n\n");
	printf("\t-----------------THEATER BOOKING TICKET----------------\n");
	printf("\t============================================================\n");
	printf("\t Booking ID : %d \t\t\tShow Name : Spider-Man: No Way Home in Fun Cinemas\n", TicketGenerateId);
	printf("\t Customer  : %s\n", name);
	printf("\t\t\t                              Date      : 21-02-2022\n");
	printf("\t                                              Time      : 06:00pm\n");
	printf("\t                                              Hall      : 04\n");
	printf("\t                                              seats No. : %d  \n", choice);
	printf("\t                                              amount . : %d  \n\n", amount);
	person[count].id = TicketGenerateId;
	printf("\t============================================================\n");
	return;
}
