#include <iostream>
#include <string.h>
#include <locale.h>
//Проверить, есть ли в тексте повторяющиеся слова.
using namespace std;
int main(){
	setlocale(LC_ALL,"rus");
    int n=0,i,w,c=0,f=0,k,j;
    char b[60],ch=' ';
    char a[]="ub lukomorya dub zeleniy";
    
    for(;a[n]!='\0';){
    	k=0;
        for(;(a[n]!=' ')&&(a[n]!='\0');n++){
            b[k]=a[n];
            k++;   
        }//загружаем слово в массив
        n++;
		cout<<b<<endl;
//		for(;j<strlen(a);j++){
			j=n;
			
			if(a[j]==b[0]&&a[j-1]==ch){	// если равно первому символу b и перед ним есть пробел 
//			w=0;
//     		cout<<"a:"<<a[j]<<' '<<"b:"<<b[0]<<endl;
				for(i=1;i<strlen(b);i++){

//					cout<<k<<endl;
//					cout<<"a:"<<a[j+i]<<' '<<"b:"<<b[i]<<endl;
					if(a[j+i]!=b[i]){

						w=0;
//						w++;
//						cout<<"yes";
						break;
					}
					else
					w=1;
				}
//		 	cout<<w;
			if(w==1){
			cout<<"est` odinakovie slova";
			break;
			}		
			}
//		}
    }  
}


