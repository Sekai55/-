#include<iostream>
using namespace std;
const int m=10;
int   main ()
{ int i,j,k, l, Tmp;
  int A[m]={4, 2, 8, 4, 6, 1, 3,9, 5, 11};
i=1;
  do { j=0;
       do if (A[i]<=A[j])
          { k=i;
            Tmp=A[i];
            do
              { A[k]=A[k-1];
                k--;}
            while (k>j);
            A[j]=Tmp;
            j=i;}  
          else (j++);
       while (j<i);
       i++;  }
  while (i<m);
   for (i=0; i<m; i++)
      cout<<A[i]<<" ";
}

