#include<stdio.h>
#include<string.h>
int main()
{
	char sent[100];
	gets(sent);
	//char sent[]="aaabbfff";
	int a=0;
	for(int i=0; sent[i]!= '\0'; i++)
	{
		a=0;
		for(int j=i; sent[j]!='\0'; j++)
		{
			if(sent[j]==sent[i])
			a++;
			else
			break;				
		}
		printf("(%c %d) ",sent[i],a);
		i=i+a-1;
	}
	return 0;
}




