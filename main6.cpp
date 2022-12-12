#include <iostream>


 

int main() {
	setlocale(LC_ALL, "russian");
	  
	  int d,m,y;
	printf ("Введите год:");
	 scanf ("%i", &y);
	 
	   if (y%4==0) {
	   	 if (y%100==0){
	   	 	if (y%400==0)
	   	 	 printf ("Год високосный\n");
	   	 	else 
	   	 	 printf ("Год не високосный\n");
			}
		else
		    printf ("Год високосный\n");
	   }
	else 
	    printf ("Год не високосный\n");
	  
	
	
	
	
	      
 
    printf ( "Введите год: ");
    scanf("%i",&y);
  switch(y % 12){
  
    case 0:
        printf ( "По восточному календарю Вы Обезьяна\n");
         break;
    case 1:
        printf ("По восточному календарю Вы Петух\n");
         break;
    case 2:
        printf ( "По восточному календарю Вы Собака\n") ;
         break;
    case 3:
        printf ("По восточному календарю Вы Свинья\n");
         break;
    case 4:
        printf ( "По восточному календарю Вы Крыса\n");
         break;
    case 5:
        printf ( "По восточному календарю Вы Бык\n");
         break;
    case 6:
        printf ( "По восточному календарю Вы Тигр\n");
         break;
    case 7:
        printf ( "По восточному календарю Вы Кролик\n");
         break;
    case 8:
        printf ( "По восточному календарю Вы Дракон\n");
         break;
    case 9:
        printf ( "По восточному календарю Вы Змея\n");
         break;
    case 10:
        printf ( "По восточному календарю Вы Лошадь\n");
         break;
    case 11:
        printf ( "По восточному календарю Вы Овца\n");
         break;
    
    
  default :
    	 printf ("По восточному календарю Вы\n");
    	 
         break;
		 }



       printf("Введите число:");
       scanf ("%i", &d);
       printf ("Введите месяц:");
       scanf ("%i",&m);
         if (m==12&&d>=21 || m==01&&d<=20)
              printf ("По знаку зодиака Вы Козерог\n");
              else
         if (m==1&&d>=21 || m==2&&d<=20)
              printf ("По знаку зодиака Вы Водолей\n");
              else
         if (m==2&&d>=21 || m==3&&d<=20)
              printf ("По знаку зодиака Вы Рыбы\n");
              else
         if (m==3&&d>=21 || m==4&&d<=20)
              printf ("По знаку зодиака Вы Овен\n");
              else
         if (m==4&&d>=21 || m==5&&d<=20)
              printf ("По знаку зодиака Вы Телец\n");
              else
         if (m==5&&d>=21 || m==6&&d<=20)
              printf ("По знаку зодиака Вы Близнецы\n");
              else
         if (m==6&&d>=21 || m==7&&d<=20)
              printf ("По знаку зодиака Вы Рак\n");
              else
         if (m==7&&d>=21 || m==8&&d<=20)
              printf ("По знаку зодиака Вы Лев\n");
              else
         if (m==8&&d>=21 || m==9&&d<=20)
              printf ("По знаку зодиака Вы Дева\n");
              else
         if (m==9&&d>=21 || m==10&&d<=20)
              printf ("По знаку зодиака Вы Весы\n");
              else
         if (m==10&&d>=21 || m==11&&d<=20)
              printf ("По знаку зодиака Вы Скорпион\n");
              else
         if (m==11&&d>=21 || m==12&&d<=20)
              printf ("По знаку зодиака Вы Стрелец\n");
              else
              
                printf ("По знаку зодиака Вы\n ");
       
       
       
       
       
       
       
       
}

