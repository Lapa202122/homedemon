#include <iostream>
#include <string.h>

void fill(int array[], int size);

int main()
{
	 int SIZE1 = 13;
	 int SIZE2 = 27;

	int array1 [SIZE1] = {};
	int array2 [SIZE2] = {};

	fill(array1, SIZE1);
	fill(array2, SIZE2);
	
	
	return 0;
}

void fill(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = i + 1;
		printf(" %d ",array[i]);
	}
   printf("\n");
}