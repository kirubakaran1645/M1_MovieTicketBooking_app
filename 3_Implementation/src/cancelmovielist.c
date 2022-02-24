
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
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