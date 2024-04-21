#include <iostream>
#include <stdlib.h>
#include <locale>
using namespace std;
int main()
{
setlocale (LC_ALL, "rus");
const int n=10;
int A[10];
cout<<"Полученные элементы массива \n";
	for (int i=0; i<n; i++)
		{
		A[i]=rand()%100;
		cout<<A[i]<<"	";
		}
 cout<<endl;
}//При запуске программы выводятся одни и те же "случайные" значения
