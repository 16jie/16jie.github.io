#include<stdio.h>
#include<conio.h>
#include<unistd.h>
char map[7][7]={
	{'#','#','#','#','#','#','\n'},
	{'#',' ',' ','#',' ',' ','\n'},
	{'#',' ','#','#',' ','#','\n'},
	{'#',' ',' ','#',' ','#','\n'},
	{'#','#',' ',' ',' ','#','\n'},
	{'#','#','#','#','#','#','\n'}};
void Print(char map[][7])
{
	int i,j;
	for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++)
		{
		printf("%c",map[i][j]);
		}
	}
}
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	char button;
	char I='0';
	int x,y;//坐标
	x=1;
	y=1;
	map[x][y]=I;
	Print(map);
	for(button=getch();1;button=getch())
	{
		switch(button)
		{
			case 'w':
			if(map[x-1][y]!=' ')
			{
				printf("错误");
				sleep(1);
				printf("\r   \r");
			}
			else
			{
				int m,n;
				m=x--;
				n=y;
				map[m][n]=' ';
				map[x][y]=I;
				clrscr();
				Print(map);
			}
			break;
			
			case 's':
			if(map[x+1][y]!=' ')
			{
				printf("错误");
				sleep(1);
				printf("\r   \r");
			}
			else
			{
				int m,n;
				m=x++;
				n=y;
				map[m][n]=' ';
				map[x][y]=I;
				clrscr();
				Print(map);
			}
			break;
			
			case 'a':
			if(map[x][y-1]!=' ')
			{
				printf("错误");
				sleep(1);
				printf("\r   \r");
			}
			else
			{
				int m,n;
				m=x;
				n=y--;
				map[m][n]=' ';
				map[x][y]=I;
				clrscr();
				Print(map);
			}
			break;
			
			case 'd':
			if(map[x][y+1]!=' ')
			{
				printf("错误");
				sleep(1);
				printf("\r   \r");
			}
			else
			{
				int m,n;
				m=x;
				n=y++;
				map[m][n]=' ';
				map[x][y]=I;
				clrscr();
				Print(map);
			}
			break;
		}
	}
}
