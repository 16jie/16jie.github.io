#include<stdio.h>
#include<conio.h>
#include<unistd.h>
#include<stdlib.h>
char map[10][20];
void Print(char map[][20]);
void creat(char map[][20]);
void reco(char a,char map[][20],int x,int y);
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	char button;
	int x=1,y=1;//坐标
	map[x][y]='0';
	creat(map);
	Print(map);
	for(button=getch();!map[x][y]!=' ';button=getch())
	{
		do{
		if(!kbhit())
		{
			int m,n;
		switch(button)
		{
			case 'w':
			m=x--;
			n=y;
			map[m][n]=' ';
			reco(map[x][y],map,x,y);
			clrscr();
			Print(map);
			usleep(500000);
			break;
		
			case 's':
			m=x++;
			n=y;
			map[m][n]=' ';
			reco(map[x][y],map,x,y);
			clrscr();
			Print(map);
			usleep(500000);
			break;
		
			case 'a':
			m=x;
			n=y--;
			map[m][n]=' ';
			reco(map[x][y],map,x,y);
			clrscr();
			Print(map);
			usleep(500000);
			break;
	
			case 'd':
			m=x;
			n=y++;
			map[m][n]=' ';
			reco(map[x][y],map,x,y);
			clrscr();
			Print(map);
			usleep(500000);
			break;
		}
		}
		else
		{break;}
	}while(1);
	}
}
void Print(char map[][20])
{
	int i,j;
	for(i=0;i<11;i++)
	{
		for(j=0;j<20;j++)
		{
			printf("%c",map[i][j]);
		}
	}
}
void creat(char map[][20])
{
	for(int i=0;i<11;i++)//创建墙
	{
		map[i][0]='|';
		map[i][18]='|';
		map[i][19]='\n';
	}
	for(int j=1;j<18;j++)
	{
		map[0][j]='_';
		map[10][j]='+';
	}
	for(int i=1;i<10;i++)
	{
		for(int j=1;j<18;j++)
		{
			map[i][j]=' ';
		}
	}
}
void reco(char a,char map[][20],int x,int y)
{
	if(a==' ')
	{
		map[x][y]='0';
	}
	else
	{
		printf("\n游戏结束\n");
		system("pause");
	}
}
