#include <iostream>
#include <stdlib.h>
#include <locale>
using namespace std;
int main()
{
setlocale (LC_ALL, "rus");
const int n=10;
int A[10];
cout<<"���������� �������� ������� \n";
	for (int i=0; i<n; i++)
		{
		A[i]=rand()%100;
		cout<<A[i]<<"	";
		}
 cout<<endl;
}//��� ������� ��������� ��������� ���� � �� �� "���������" ��������
