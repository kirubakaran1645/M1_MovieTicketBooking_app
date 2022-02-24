#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
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