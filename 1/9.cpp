#include <stdlib.h>
#include <iostream>
#include <locale>
using namespace std;
int main()
{	setlocale (LC_ALL, "rus");
	int i, j, vrem;
	int A[10]={2, 5, 3, 9, 8, 3, 12, 11, 4, 7};
	for (i=0; i<10-1; i++)  
	  for (j=i+1; j<10; j++) // Сортируем данные элементы массива
	  	if (A[i]>A[j])
	  	{ vrem=A[i];
	  	  A[i]=A[j];
	  	  A[j]=vrem;
	  	}
for (i=0; i<10; i++) //Вывод всех элементов массива
	cout<<A[i]<<" ";
} 

