#include<stdio.h>
#include<stdlib.h>
void join(char [], char []);
int main()
{
	char name[20],name1[20];
	printf("please enter the first string:");
	//scanf("%s",name);
	gets(name);
	printf("please enter the second string:");
	//scanf("%s",name);
	gets(name1);
	join(name,name1);
	printf("the joined string is %s",name);
	return 0;
}
void join(char source[], char destination[])
{
	int i=0, k=0;
	while(source[i]!='\0')i++;
	while(destination[k]!='\0')
	{
		source[i]=destination[k];
		i++;
		k++;
	 } 
	 source[i]='\0';
	return ;
}
