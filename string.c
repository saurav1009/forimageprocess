#include<stdio.h>
#include<string.h>
void main()
{
	char string[1000];
	printf("enter the string in uppercase:\n");
	scanf("%s",&string);
	printf("the string in lowercase is %c",strrev(string));
}
