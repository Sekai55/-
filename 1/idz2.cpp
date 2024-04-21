#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main(){
	
	const int n=10;
	int i,j,c;
	float a[n][n]={0};
	
	for(i=0;i<n;i++){
		
		for(j=0;j<n;j++){
			
			a[i][j]=sin(i+(j/2));
			
			cout<<a[i][j]<<"  "; 
			
			if(a[i][j]>0)//подсчет положительных чисел
			c++;
			
		}
	
	cout<<endl;	
		
	}

cout<<endl<<"Number of positive elements= "<<c;

}
