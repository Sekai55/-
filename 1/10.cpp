#include <stdlib.h>
#include <iostream>

using namespace std;
const int n=10;
int main()
{	int i, j,k, m, A[n]={4, 2, 8, 4, 6, 1, 3, 9, 5, 11 };
	for (i=1; i<n; i++)  
	{ m=A[i-1];
	  k=i-1;
	  for (j=i; j<n; j++)
	  	{if (m>A[j-1]) 
	  	  {
	  	  m=A[j-1];
	  	  k=j-1;	}
	  	}
	A[k]=A[i-1];
	A[i-1]=m;
	}
for (i=0; i<n; i++) //Вывод всех элементов массива
	cout<<A[i]<<" ";
} 
