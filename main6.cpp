#include <iostream>


 

int main() {
	setlocale(LC_ALL, "russian");
	  
	  int d,m,y;
	printf ("������� ���:");
	 scanf ("%i", &y);
	 
	   if (y%4==0) {
	   	 if (y%100==0){
	   	 	if (y%400==0)
	   	 	 printf ("��� ����������\n");
	   	 	else 
	   	 	 printf ("��� �� ����������\n");
			}
		else
		    printf ("��� ����������\n");
	   }
	else 
	    printf ("��� �� ����������\n");
	  
	
	
	
	
	      
 
    printf ( "������� ���: ");
    scanf("%i",&y);
  switch(y % 12){
  
    case 0:
        printf ( "�� ���������� ��������� �� ��������\n");
         break;
    case 1:
        printf ("�� ���������� ��������� �� �����\n");
         break;
    case 2:
        printf ( "�� ���������� ��������� �� ������\n") ;
         break;
    case 3:
        printf ("�� ���������� ��������� �� ������\n");
         break;
    case 4:
        printf ( "�� ���������� ��������� �� �����\n");
         break;
    case 5:
        printf ( "�� ���������� ��������� �� ���\n");
         break;
    case 6:
        printf ( "�� ���������� ��������� �� ����\n");
         break;
    case 7:
        printf ( "�� ���������� ��������� �� ������\n");
         break;
    case 8:
        printf ( "�� ���������� ��������� �� ������\n");
         break;
    case 9:
        printf ( "�� ���������� ��������� �� ����\n");
         break;
    case 10:
        printf ( "�� ���������� ��������� �� ������\n");
         break;
    case 11:
        printf ( "�� ���������� ��������� �� ����\n");
         break;
    
    
  default :
    	 printf ("�� ���������� ��������� ��\n");
    	 
         break;
		 }



       printf("������� �����:");
       scanf ("%i", &d);
       printf ("������� �����:");
       scanf ("%i",&m);
         if (m==12&&d>=21 || m==01&&d<=20)
              printf ("�� ����� ������� �� �������\n");
              else
         if (m==1&&d>=21 || m==2&&d<=20)
              printf ("�� ����� ������� �� �������\n");
              else
         if (m==2&&d>=21 || m==3&&d<=20)
              printf ("�� ����� ������� �� ����\n");
              else
         if (m==3&&d>=21 || m==4&&d<=20)
              printf ("�� ����� ������� �� ����\n");
              else
         if (m==4&&d>=21 || m==5&&d<=20)
              printf ("�� ����� ������� �� �����\n");
              else
         if (m==5&&d>=21 || m==6&&d<=20)
              printf ("�� ����� ������� �� ��������\n");
              else
         if (m==6&&d>=21 || m==7&&d<=20)
              printf ("�� ����� ������� �� ���\n");
              else
         if (m==7&&d>=21 || m==8&&d<=20)
              printf ("�� ����� ������� �� ���\n");
              else
         if (m==8&&d>=21 || m==9&&d<=20)
              printf ("�� ����� ������� �� ����\n");
              else
         if (m==9&&d>=21 || m==10&&d<=20)
              printf ("�� ����� ������� �� ����\n");
              else
         if (m==10&&d>=21 || m==11&&d<=20)
              printf ("�� ����� ������� �� ��������\n");
              else
         if (m==11&&d>=21 || m==12&&d<=20)
              printf ("�� ����� ������� �� �������\n");
              else
              
                printf ("�� ����� ������� ��\n ");
       
       
       
       
       
       
       
       
}

