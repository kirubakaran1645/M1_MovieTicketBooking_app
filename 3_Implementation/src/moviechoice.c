#include <stdio.h>
#include <stdlib.h>
#include "moviedetails.c"
#include "decleration.h"
#include <strings.h>
int moviechoice(void)
{
	int choice;
	printf("                 Simple Movie Ticket Booking System\n");
	printf(" ==================================================================\n");
	printf("||             1- Book Ticket:          	                  ||\n");
	printf("||             2- Cancel Ticket:		                  ||\n");
	printf("||             3- Price Change :       	                      	  ||\n");
	printf("||             4- Exit:       	                      	          ||\n");
	printf("||================================================================||\n");
	printf("Enter your option");
	scanf("%d", &choice);
	return choice;
}