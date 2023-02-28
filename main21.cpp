
#include <iostream>
#include <string.h>

main()
{
	
	char str[100];
	int c, i, j;


	printf("Vvedite ctroku \n");
	 gets(str);

	    for (int n = 0; n < strlen(str); n++)
	   {
		str[n] = str[n + 1];
 	   }

	  puts(str);

	printf("Vvedite cleduychyy ctroku \n");
	gets(str);

	int l = strlen(str);
	
	for (i = 0, j = l - 1; i < j; i++, j--)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
	}

	puts(str);
}
