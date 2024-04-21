#include <iostream>
#include <stdlib.h>
#include <locale>
#include <time.h> // библиотека дл€ работы команды srand
using namespace std;
int main()
{
setlocale (LC_ALL, "rus");
srand ((unsigned)time(NULL));// команда благодар€ которой мы получаем случайные числа
int k, array [20];
cout<<"ѕолученные элементы массива \n";
	for (k=0; k<20; k++)
		{
		array[k] = rand( );
		cout<<array[k]<<"\t";
		}
}//ѕри запуске программы вывод€тс€ другие значени€
