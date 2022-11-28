#include <stdio.h>

main()
{
int pin1,pin2;
printf("pin1=");
scanf("%i",&pin1);
printf("pin2=");
scanf("%i",&pin2);

if((((pin1==951)&&(pin2==159))||((pin1==456)&&(pin2==654))||((pin1==753)&&(pin2==357))))
{
 printf("OK");
}
else
{
	printf("ERROR");
}
}
