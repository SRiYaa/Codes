#include<stdio.h>
#include<string.h>
//String Palindrome
int main()
{
	int n,i;
	printf("Enter a number ");
	scanf("%d",&n);
	char str[n][15];
	char s [n][15];
	char max[15];
	printf("\nEnter the elements:\n");
	for(int i=0; i<n;i++)
	scanf("%s",&str[i][0]);
   /* for(int i=0; i<n;i++)
    puts(str[i]);*/
	for(i=0; i<n;i++)
	{
	int c= strlen(str[i]);	
	for(int l=0;l<c;l++)
	s[i][l]=str[i][l];
	//puts(s[i]);
	strrev(str[i]);
	//puts(str[i]);
	int j = strcmp ( str[i], s[i] ) ; 
	if(j==0)
	{
	for(int l=0;l<c;l++)	
	max[l]=s[i][l];
	puts(max);
	break;
    }
    }
    int b =strlen(max);
    for(int k=i+1;k<n;k++)
    {
    s[k][0]=str[k][0];
	strrev(str[k]);
	int j = strcmp ( str[k], s[k] ) ; 
	if(j==0)
	{
		int m=strcmp ( str[k], max) ; 
		int a=strlen(str[k]);
	if(a>b)
	max[0]=s[k][0];
    }
    //printf("%s",max[0]);
    //puts(max);
	}
    
	return 0;
}
