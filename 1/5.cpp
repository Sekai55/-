#include <iostream>
#include <stdlib.h>
#include <locale>
using namespace std;
int main()
{
setlocale (LC_ALL, "rus");
const int n=10;
int A[10]; int f, k=0;
cout<<"������ �����. �������� �� -*���� �����* �� + *���� �����*."<<endl;
cout<<"������� ��������: "<<endl;
cin>>f; // ������ ��������
cout<<"���������� �������� ������� �� - "<<f<<" �� + "<<f<<"\n";
	for (int i=0; i<n; i++)
		{
		A[i]=rand()% (2*f)-f; // "��������� �����" � �������� ���� ���������
		cout<<A[i]<<"	";
		}
 cout<<endl;
	for(int i=0; i<n; i++)
		{
		if (A[i]<0) k++; // ������� ���-�� ������������� ���������
		}
			if (k>0) cout<<"\n���������� ������������� ��������� �������\n"<< k<<endl; 
			else cout<<"\n������������� ��������� � ������� ���"<<endl; 
}
 
