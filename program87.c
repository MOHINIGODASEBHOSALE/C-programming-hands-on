#include<stdio.h>
#include<stdlib.h>
void strtoggleX(char str[])
{
	int iCnt=0;
	if(str==NULL)
	{
		return;
	}
	while(*str != '\0')
	{
		if(*str>='a' && *str<='z')
		{
			*str=*str-('a'-'A');   //32=='a'-'A'
		}
		else if(*str>='A' && *str<='Z')
		{
			*str=*str+('a'-'A');  //32=='a'-'A'
		}
		str++;
		
	}
}

int main()
{

	char Arr[40];
	int iRet=0;
	printf("enter string :\n");
	//fgets(Arr,40,stdin);   //fgets(कशात , किती , कुठून) 
	//gets(Arr);
	//scanf("%s",Arr);
	scanf("%[^'\n']s",Arr);  //best way to gett string
	strtoggleX(Arr);
	printf("Toggled string is %s",Arr);
	return 0;
}