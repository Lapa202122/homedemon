#include <stdio.h>
#include <time.h>
#include <stdlib.h>

main() 
{
    int mas[100][100];
    int n,j,m,i,d;  
       float a,sum; 
          printf("n = "); 
          scanf("%d", &n); 
          printf("m = ");
          scanf("%d",&m);
       if(n==m)
   {
          printf("Enter the contents of the array \n"); 
    for(i=0;i<n;i++) 
    for(j=0;j<n;j++) 
          scanf("%d",&mas[i][j]); 

          printf("Array before inversion \n\n"); 
    for(i=0;i<n;i++) 
   { 
    for(j=0;j<n;j++) 
          printf("%5d",mas[i][j]);
          printf("\n\n"); 
    }
          printf("Array after inversion \n\n");
   {
            a=mas[j][i];
            mas[j][i]=mas[i][j]; 
            mas[i][j]=a;
    }
    for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
  
          printf("%5d",mas[j][i]);
          printf("\n\n");
    }
 
   }
}
