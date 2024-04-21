#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
using namespace std;

const int weight=20;
const int height=20;
bool gameOver,print,gameWin=false;
int i,j,x,y,k,fx,fy,score;
int TailX[100],TailY[100],nTail;
enum direct{STOP=0, RIGHT, LEFT, UP, DOWN};
direct dir;

void setup(){
	gameOver=false;
	dir=STOP;
	x=weight/2-1;
	y=height/2-1;
	fx=rand()%weight;
	fy=rand()%height;
	score=0;
}

void place(){
	system("cls");
	for(i=0;i<weight+2;i++)
        cout<<"#";
    cout<<endl;
    
    for(i=0;i<height;i++){
    	for(j=0;j<weight+1;j++){
    		if(j==0||j==weight)
    			cout<<"#";
    		if(j==x && i==y)
    			cout<<"0";
    		else if(j==fx && i==fy)
    			cout<<"F";
    		else{
    			print=false;
    			for(k=0;k<nTail;k++)
    				if(TailX[k]==j && TailY[k]==i ){
					cout<<"o";
					print=true;
    				}
    			if(!print) 		
    			cout<<" ";
    		}
    		
    	}
    cout<<endl;
	}
    
	for(i=0;i<weight+2;i++)
        cout<<"#";
    cout<<endl;
    
	cout<<"SCORE: "<<score<<endl;
	cout<<"Version: 1.1 ";
}

void input(){
	if(kbhit()){
		switch(getch()){
		case 'd':
			dir=RIGHT;
			break;	
		case 'a':
			dir=LEFT;
			break;
		case 'w':
			dir=UP;
			break;
		case 's':
			dir=DOWN;
			break;
		case 'x':
			gameOver=true;
			break;
		}
	}
}

void logic(){
	int prevX=TailX[0];
	int prevY=TailY[0];
	int prev2X,prev2Y;
	TailX[0]=x;
	TailY[0]=y;
	for(i=1;i<nTail;i++){
		prev2X=TailX[i];
		prev2Y=TailY[i];
		
		TailX[i]=prevX;
		TailY[i]=prevY;
		
		prevX=prev2X;
		prevY=prev2Y;
	}
			

	switch(dir){
		case RIGHT:
			x++;
			break;	
		case LEFT:
			x--;
			break;
		case UP:
			y--;
			break;
		case DOWN:
			y++;
			break;
		}
//	if(x>=weight||x<0||y>=height||y<0)
//		gameOver=true;
	if(x>=weight)
		x=0;
	else if(x<0)
		x=weight-1;
		
	if(y>=height)
		y=0;
	else if(y<0)
		y=height-1;//проход скозь стены
	
	for(i=1;i<nTail;i++)
		if(x==TailX[i] && y==TailY[i])
			gameOver=true;
	
	if(x==fx && y==fy){
		score+=10;
		fx=rand()%weight;
		fy=rand()%height;
		nTail++;
	}
	if (score==500){
		gameWin=true;
		gameOver=true;
	}
}

int main(){
	setup();
	while(!gameOver){
    place();
    input();
    logic();
    Sleep(60);//частота обновления
	}

	
	if(gameWin){
    	system("cls");
		cout<<"# # # # # # # # # # # #"<<endl;
		cout<<"#  Y O U  W I N ! ! ! #"<<endl;
		cout<<"# # # # # # # # # # # #"<<endl;
		Sleep(3000);
	}	
	else{
		system("cls");
		cout<<"# # # # # # # # # # # #"<<endl;
		cout<<"#  G A M E  O V E R ! #"<<endl;
		cout<<"# # # # # # # # # # # #"<<endl;
		Sleep(3000);
	}

}
