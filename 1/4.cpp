#include <iostream>
#include <stdlib.h>
#include <locale>
#include <time.h> // библиотека для работы команды: srand
using namespace std;
int main()
{setlocale (LC_ALL, "rus");
srand ((unsigned)time(NULL));
int A[10] ;
const int n=10;
cout<<"Полученные элементы массива \n";
	for (int i=0; i<n; i++)
		{
		A[i] = rand( )%100;
		cout<<A[i]<<"	";
		}
	cout<<endl;
}//При запуске программы выводятся другие значени, но в пределе от одного до ста
