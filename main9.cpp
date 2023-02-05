#include <iostream>
 
using namespace std;
 
int main()
{
    setlocale(LC_ALL, "Rus");
    int n = 0;
    printf("Введите количество элементов :");
    scanf("%d", &n);
 
    int *arr = new int[n];
 
    for (int i = 0; i < n; i++)
    {
      printf("Введите элемент:",i);
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
 
    printf ( "Максимальное число: %d\n" , max );
    printf ( "Минимальное число: %d\n" , min );
    printf ( "Сумма всех элементов: %d\n" , avg );
    printf ( "Среднее арифметическое значение (целые числа): %d\n" , avg/n  );
 
   
}
