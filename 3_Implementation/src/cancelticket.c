#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
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