#include <stdio.h>

main ()
{
   int a=5;
   while(a!=7)
   {
   	 scanf("%i", &a);
   	 if(a>7)
   	 {
      printf("Chislo bolshe 7\n");
      }
		else
		{
         printf("Chislo menshe 7\n");
	     }
     if(a>10)
     {
      printf("Chislo bolshe 10\n");
      }
        else 
         if(a<10)
         {
          printf("Chislo menshe 10\n");
         }
          else
          {
           printf("Ugadal, no ne to chislo\n");
           }
     if (a%2==0)
     {
      printf("Chislo delitcya na 2\n");
      }
        else
        {
         printf("Chislo ne delitcya na 2\n");
         }
     if (a%3==0)
     {
      printf ("Chislo delitcya na 3\n");
      }
        else
        {
         printf("Chislo ne delitcya na 3\n");
         }
	    
   }
   
	printf("Nice!!!!!");
		
	
}
