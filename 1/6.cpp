#include <stdlib.h>
#include <iostream>
#include <locale>
using namespace std;
int main()
{	setlocale (LC_ALL, "rus");
	int i, j;
	int array [3][5]={ {1, 2, 3, 4, 5} , {3, 5, 2 ,7 ,1}, {-3, 7, 4, 1, 0}};
	cout<<"\n Введите массив \n";
	for (i=0; i<3; i++)
	{ cout<< endl;
	  for (j=0; j<5; j++)
	  	cout<<array[i][j]<<"\t"; // Вывод каждого элемента
	}
	cout<<endl;
}

