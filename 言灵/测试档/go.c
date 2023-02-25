#include<stdio.h>
#include<go.h>
#include<conio.h>
int button=0;
int main()
{
	for(;button!=5;scanf("%d",&button))
	{
		map(button);
	}
	clrscr();
	printf("拜拜\n");
	return 0;
}
