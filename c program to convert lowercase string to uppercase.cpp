#include<stdio.h>
#include<stdlib.h>
void upper(char []);
int main()
{
	char name[20];
	printf("please enter the string:");
	//scanf("%s",name);
	gets(name);
	upper(name);
	printf("%s ",name);
	return 0;
}
void upper(char a[])
{
	int i=0;
	while(a[i]!='\0')
	{
		if(a[i]>=97 && a[i]<=122) a[i]-=32;
		i++;
		
	 }
	return ;
}
