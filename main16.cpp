#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
	int arr[100][100];

	int tmp;

	bool fl = true;

	int n, m;

	printf("n = ");
	scanf("%i", &n);
	printf("\n");

	printf("m = ");
	scanf("%i", &m);
	printf("\n");
    
    printf("\n Your array \n\n");
     
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = rand() %100;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%4i", arr[i][j]);
		}

		printf("\n");
	}

	printf("\n");

	while (fl)
	{
		fl = false;


		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m - 1; j++)
			{
				if (arr[i][j] > arr[i][j + 1])
				{
					tmp = arr[i][j];
					arr[i][j] = arr[i][j + 1];
					arr[i][j + 1] = tmp;

					fl = true;
				}
			}
		}
	}

    printf("\n Your array is sorted \n\n"); 
 
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%4i", arr[i][j]);
		}

		printf("\n");
	}



	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (j == 0)
			{
				tmp = arr[i][j];
				arr[i][j] = arr[i][m - 1];
				arr[i][m - 1] = tmp;
			}
		}

		printf("\n");
	}

   printf(" \n The first and last columns have been replaced in the array \n\n"); 
   
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%4i", arr[i][j]);
		}

		printf("\n");
	}
}
