#include<stdio.h>
#include<conio.h>
void map(int n)
{
	switch(n)
	{
		case 0:
		clrscr();
		printf("欢迎，按相应键以到达指定位置\n输入5以退出\n输入0以返回\n");
		printf("====================\n");
		printf("|        主城       |\n");
		printf("|   1.商店          |\n");
		printf("|   2.广场          |\n");
		printf("|   3.酒馆          |\n");
		printf("|   4.出城          |\n");
		printf("--------------------\n");
		break;
		
		case 1:
		clrscr();
		printf("====================\n");
		printf("|        商店        |\n");
		printf("|   1.功能未开放     |\n");
		printf("|   2.功能未开放     |\n");
		printf("|   3.功能未开放     |\n");
		printf("|   4.功能未开放     |\n");
		printf("--------------------\n");
		break;
		
		case 2:
		clrscr();
		printf("====================\n");
		printf("|        广场        |\n");
		printf("|   1.功能未开放     |\n");
		printf("|   2.功能未开放     |\n");
		printf("|   3.功能未开放     |\n");
		printf("|   4.功能未开放     |\n");
		printf("--------------------\n");
		break;
		
		case 3:
		clrscr();
		printf("====================\n");
		printf("|        酒馆        |\n");
		printf("|   1.功能未开放     |\n");
		printf("|   2.功能未开放     |\n");
		printf("|   3.功能未开放     |\n");
		printf("|   4.功能未开放     |\n");
		printf("--------------------\n");
		break;
		
		case 4:
		clrscr();
		printf("====================\n");
		printf("|        出城        |\n");
		printf("|   1.功能未开放     |\n");
		printf("|   2.功能未开放     |\n");
		printf("|   3.功能未开放     |\n");
		printf("|   4.功能未开放     |\n");
		printf("--------------------\n");
		break;
	}
}
