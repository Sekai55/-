#include <stdlib.h>
#include <iostream>
using namespace std;
int  main ()
{ int n=10, A[]={3, 5, 1, 6, 2, 4, 8,3, 7, 2}, temp, i, j;
    for (i=1; i<n; i++)
   { j=i;
     temp = A[i];
     while (j >0 && temp <A[j-1])
     {
     A[j]= A[j-1];
     j--;
     }  
	A[j]= temp;
   }
  for (i=0; i<n; i++)
    cout<<A[i]<<" ";  
	cout<<endl;         
}

