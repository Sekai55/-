#include <iostream>
#include <stdlib.h>
#include <locale>
using namespace std;
int main()
{
setlocale (LC_ALL, "rus");
const int n=10;
int A[10]; int f, k=0;
cout<<"Пример ввода. Диапозон от -*Ваше число* до + *Ваше число*."<<endl;
cout<<"Введите диапозон: "<<endl;
cin>>f; // Вводим диапозон
cout<<"Полученные элементы массива от - "<<f<<" до + "<<f<<"\n";
	for (int i=0; i<n; i++)
		{
		A[i]=rand()% (2*f)-f; // "случайные числа" в заданном нами диапозоне
		cout<<A[i]<<"	";
		}
 cout<<endl;
	for(int i=0; i<n; i++)
		{
		if (A[i]<0) k++; // Подсчет кол-ва отрицательных элементов
		}
			if (k>0) cout<<"\nКоличество отрицательных элементов массива\n"<< k<<endl; 
			else cout<<"\nОтрицательных элементов в массиве нет"<<endl; 
}
 
