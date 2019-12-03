#include<stdio.h>
#include<stdlib.h>
void copy(char [], char []);
int main()
{
	char name[20],name1[20];
	printf("please enter the string:");
	//scanf("%s",name);
	gets(name);
	copy(name,name1);
	printf("%s",name1);
	return 0;
}
void copy(char source[], char destination[])
{
	int i=0;
	while(source[i]!='\0')
	{
		destination[i]=source[i];
		i++;
	 } 
	 destination[i]='\0';
	return ;
}
