#include <stdlib.h>
#include <iostream>
using namespace std;
int main ()
{ int k, array[20]; // Задаем массив в 20 значений
	for (k=0; k<20; k++)
	{
			array[k]=rand( );
			cout<<array[k]<<"\t";
	}
} // При повторном запуске программы числа не меняются 
