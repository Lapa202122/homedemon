#include <iostream>

main()
{
	int n;
	int mas[60];
	printf("Enter the number of items\n");
	scanf("%i", &n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%i",&mas[i] );
	}
	
	 for (int i=0;i<n;i++)
	 {
	 	printf("%4i",mas[i]);
	 }

	
}
