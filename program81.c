#include<stdio.h>
int countsmall(char str[])
{
	int iCnt=0;
	if(str==NULL)
	{
		return 0;
	}
	while(*str != '\0')
	{
		if((*str>='a') && (*str<='z'))
				{
			iCnt++;
		}
		str++;
		
	}
	return iCnt;
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
	iRet=countsmall(Arr);
	printf("Frequency of small letters  is %d\n",iRet);
	return 0;
}