#include <iostream>
 
using namespace std;
 
int main()
{
    setlocale(LC_ALL, "Rus");
    int n = 0;
    printf("������� ���������� ��������� :");
    scanf("%d", &n);
 
    int *arr = new int[n];
 
    for (int i = 0; i < n; i++)
    {
      printf("������� �������:",i);
       scanf("%d", &arr[i]);
    }
 
    int min = arr[0];
    int max = arr[0];
    int avg = 0;
 
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
        avg += arr[i];
    }
 
    printf ( "������������ �����: %d\n" , max );
    printf ( "����������� �����: %d\n" , min );
    printf ( "����� ���� ���������: %d\n" , avg );
    printf ( "������� �������������� �������� (����� �����): %d\n" , avg/n  );
 
   
}
