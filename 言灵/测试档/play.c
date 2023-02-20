#include"mean.h"
#include<stdio.h>
char words[21];
int main()
{
	scanf("%s",words);
	if(words[0]=='a')
	{
		recognize(1);
	}
	else
	{
		printf("请输入a\n");
		}
	return 0;
}
