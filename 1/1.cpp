#include <stdlib.h>
#include <iostream>
using namespace std;
int main ()
{ int k, array[20]; // ������ ������ � 20 ��������
	for (k=0; k<20; k++)
	{
			array[k]=rand( );
			cout<<array[k]<<"\t";
	}
} // ��� ��������� ������� ��������� ����� �� �������� 
