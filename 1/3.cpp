#include <iostream>
#include <stdlib.h>
#include <locale>
#include <time.h> // ���������� ��� ������ ������� srand
using namespace std;
int main()
{
setlocale (LC_ALL, "rus");
srand ((unsigned)time(NULL));// ������� ��������� ������� �� �������� ��������� �����
int k, array [20];
cout<<"���������� �������� ������� \n";
	for (k=0; k<20; k++)
		{
		array[k] = rand( );
		cout<<array[k]<<"\t";
		}
}//��� ������� ��������� ��������� ������ ��������
