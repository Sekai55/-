#include <iostream>
#include <iomanip>
#include <string.h>
#include <conio.h>
#include <locale>
using namespace std;
struct library {
	int shifr;
	char author[20];
	char title[20];
	int year; 
};
void Print ()
{
cout<<"=======================================\n";
cout<<"||  Shifr book  ||   avtor  ||   NAME   ||    year �������    ||\n";
cout<<"=======================================\n";
} ;
void PrintData (library *ptr, int i)
{cout<<"||"<<setw(10)<<ptr[i].shifr<<"||"<<setw(20)<<ptr[i].author;
 cout<<"||"<<setw(20)<<ptr[i].title<<"||"<< setw(15)<<ptr[i].year<<"||"<<endl;
} ;
void PrintEnd ()
{
cout<<"========================================\n";
} ;

int main ()
{	setlocale(LC_ALL,"rus");
	int i, n, m, god, v=0, g=0;
 	char avtor[20];
 	
	struct library ptr[50];
	
	cout<<"Vvedite kol-vo books \n";     
	cin>>n;
	
	for (i=0; i<n; i++){
		cout<<"Information of"<<(i+1)<<"book :\n";
  	 	cout<<"Shifr book \n";
		cin>>ptr[i].shifr;
		cout<<"FIO avtora  \n";
		cin>>ptr[i].author;
 	 	cout<<"Name book \n";
 	  	cin>>ptr[i].title;
 	  	cout<<"Year �������  \n";
 	  	cin>>ptr[i].year;
 	};
 	 
	do  
	{ cout<<"�������� �������� :\n";
	      cout<<"1 � ������ ���� � ���������� �������\n";
          cout<<"2 � ������ ���� ������������ ���� \n";
          cout<<"3 � ������ ���� ������������� ������ \n";
          cout<<"4 - ����� \n";
          cin>>m;
 		switch (m)
		{ 
		 	case 1:
       		{ 
			Print();
        	for (char w='A'; w<'Z'; w++)
           	for ( i=0; i<n; i++)
            if(ptr[i].title[0]==w)    
			PrintData(ptr,i);
    		PrintEnd();
   			cout<<"��� ������ � ���� ������� ����� ������� ";
   			getch();    
			break;
        	};
        	
			case 2:
   			{  
			cout<<"Vvedite ������ year : \n";
       		cin>>god;
       		for (i=0; i<n; i++){
          		if (ptr[i].year==god)
          		{ v+=1;
             	if (v==1)  Print();
             	PrintData(ptr, i);
          		};
        	};
     		if(v!=0) PrintEnd();
     		else cout <<"No books ������������ year"<< endl; 
     		v=0;
     		cout<<"For exit in menu push any ������� ";
     		getch();     break;
			};
			
			case 3:
			{  
			cout<<"Vvedite FIO avtora : \n";
   	 		cin>>avtor;
    		for (i=0; i<n; i++){  
				if (strcmp(ptr[i].author, avtor)==0)
                {  g+=1;
                   if (g==1)   Print();
                   PrintData(ptr,i);
                };
        	};
    		if(g!=0) PrintEnd();
    		else cout <<"No books ������� avtora"<< endl;
    		g=0;
    		cout<<"For exit in menu push any ������� ";
    		getch();   break;      
			};
			
			case 4:
        	break; 
	   }
	}
    while (m!=4);
}

