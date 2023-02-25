
#include <iostream>
#include <string.h>


 main()
{

	char str[100];
	char tmp;
	int i;

	printf("Vvelite ctroky\n");
	gets(str);


	printf("%c\n", str[1]);


	int q = strlen(str);

	
	printf("%c\n", str[q - 1]);

	
	tmp = str[0];

	str[0] = str[q - 1];

	str[q - 1] = tmp;

	puts(str);

	printf("Ckolko cimvolov ydalit?\n");
	scanf("%i", &i);

	for (int n = i - 1; n < strlen(str); n++)
	{
		str[n] = str[n + 1];
	}

	puts(str);
}
