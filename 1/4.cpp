#include <iostream>
#include <stdlib.h>
#include <locale>
#include <time.h> // ���������� ��� ������ �������: srand
using namespace std;
int main()
{setlocale (LC_ALL, "rus");
srand ((unsigned)time(NULL));
int A[10] ;
const int n=10;
cout<<"���������� �������� ������� \n";
	for (int i=0; i<n; i++)
		{
		A[i] = rand( )%100;
		cout<<A[i]<<"	";
		}
	cout<<endl;
}//��� ������� ��������� ��������� ������ �������, �� � ������� �� ������ �� ���
