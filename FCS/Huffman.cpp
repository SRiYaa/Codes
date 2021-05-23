#include<stdio.h>
#include<string.h>
int main()
{
	char sent[100];
	gets(sent);
	int a=0;
	for(int i=0; sent[i]!= '\0'; i++)
	{
		if(sent[i] != '*')
		{
		a=0;
		for(int j=i; sent[j]!='\0'; j++)
		{
			if(sent[j]==sent[i])
			a++;				
		}
		printf("%c occurs %d times\n",sent[i],a);
        for(int j=i+1; sent[j]!='\0'; j++)
		{
			if(sent[j]==sent[i])
			sent[j]='*'	;			
		}
    	}
	}
	return 0;
}




