#include<iostream>
#include<string.h>
int main(){
	int n,k=0;
	char b[55];
    char a[60]="6fHqd&6A86^v1&7vsyDF!dNy91B3S&v9whd*gdHJv00b-n1nVmk1A";
    for(n=0;n<strlen(a);n++){
    if (((((int)a[n])>64)&&(((int) a[n])<91))||((((int)a[n])>96)&&(((int)a[n])<123))){
       b[k]=a[n];
       k++;
    } 
   } 
   for(n=0;n<k;n++)
 std::cout<<b[n];
 }
