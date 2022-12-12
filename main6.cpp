#include <iostream>


 

int main() {

	  
	  int d,m,y;
	printf ("Enter the year:");
	 scanf ("%i", &y);
	 
	   if (y%4==0) {
	   	 if (y%100==0){
	   	 	if (y%400==0)
	   	 	 printf ("Leap year\n");
	   	 	else 
	   	 	 printf ("The year is not a leap year\n");
			}
		else
		    printf ("Leap year\n");
	   }
	else 
	    printf ("The year is not a leap year\n");
	  
	
	      
 
    printf ( "Enter the year: ");
    scanf("%i",&y);
  switch(y % 12){
  
    case 0:
        printf ( "According to the Eastern calendar, you are a Monkey\n");
         break;
    case 1:
        printf ("According to the Eastern calendar, you are a Rooster\n");
         break;
    case 2:
        printf ( "According to the Eastern calendar, you are a Dog\n") ;
         break;
    case 3:
        printf ("According to the Eastern calendar, you are a Pig\n");
         break;
    case 4:
        printf ( "According to the Eastern calendar, you are a Rat\n");
         break;
    case 5:
        printf ( "According to the Eastern calendar, you are a Bull\n");
         break;
    case 6:
        printf ( "According to the Eastern calendar, you are a Tiger\n");
         break;
    case 7:
        printf ( "According to the Eastern calendar, you are a Rabbit\n");
         break;
    case 8:
        printf ( "According to the Eastern calendar, you are a Dragon\n");
         break;
    case 9:
        printf ( "According to the Eastern calendar, you are a Snake\n");
         break;
    case 10:
        printf ( "According to the Eastern calendar, you are a Horse\n");
         break;
    case 11:
        printf ( "According to the Eastern calendar, you are a Sheep\n");
         break;
    
    
  default :
    	 printf ("According to the Eastern calendar , you\n");
    	 
         break;
		 }



       printf("Enter a number:");
       scanf ("%i", &d);
       printf ("Enter the month:");
       scanf ("%i",&m);
         if (m==12&&d>=21 || m==01&&d<=20)
              printf ("According to the zodiac sign, you are a Capricorn\n");
              else
         if (m==1&&d>=21 || m==2&&d<=20)
              printf ("ÏAccording to the zodiac sign, you are Aquarius\n");
              else
         if (m==2&&d>=21 || m==3&&d<=20)
              printf ("According to the zodiac sign, you are Pisces\n");
              else
         if (m==3&&d>=21 || m==4&&d<=20)
              printf ("According to the zodiac sign, you are Aries\n");
              else
         if (m==4&&d>=21 || m==5&&d<=20)
              printf ("According to the zodiac sign, you are a Taurus\n");
              else
         if (m==5&&d>=21 || m==6&&d<=20)
              printf ("According to the zodiac sign, you are Gemini\n");
              else
         if (m==6&&d>=21 || m==7&&d<=20)
              printf ("According to the zodiac sign, you are Cancer\n");
              else
         if (m==7&&d>=21 || m==8&&d<=20)
              printf ("According to the zodiac sign, you are a Lion\n");
              else
         if (m==8&&d>=21 || m==9&&d<=20)
              printf ("According to the zodiac sign, you are a Virgo\n");
              else
         if (m==9&&d>=21 || m==10&&d<=20)
              printf ("According to the zodiac sign, you are Libra\n");
              else
         if (m==10&&d>=21 || m==11&&d<=20)
              printf ("According to the zodiac sign, you are a Scorpio\n");
              else
         if (m==11&&d>=21 || m==12&&d<=20)
              printf ("According to the zodiac sign, you are Sagittarius\n");
              else
              
                printf ("According to the zodiac sign you\n ");
       
       
       
       
       
       
       
       
}

