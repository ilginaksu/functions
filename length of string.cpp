#include<stdio.h>
#include<stdlib.h>
int Length(char []);
int main()
{
	char name[20];
	printf("please enter the string:");
	//scanf("%s",name);
	gets(name);
	printf("the length of string %s is %d",name,Length(name));
	return 0;
}
int Length(char a[])
{
	int i=0;
	while(a[i]!='\0') i++;
	return i;
}

