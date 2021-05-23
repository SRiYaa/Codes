#include<stdio.h>
int main( ) 
{
char sent[100] ; 
int k=0,j=0;
printf ( "Enter a Sentence : " ) ;  
gets ( sent ) ;  
for(int i=0;sent[i] != '\0';i++ )
{
	if(sent[i]>=65 && sent[i]<=90)
	{
	if(sent[i]=='A' || sent[i]=='E' || sent[i]=='I'|| sent[i]=='O'|| sent[i]=='U')
	k++;
	else
	j++;
    }
	else if(sent[i]>=97 && sent[i]<=122)
	{
	if(sent[i]=='a' || sent[i]=='e' || sent[i]=='i'|| sent[i]=='o'|| sent[i]=='u')
	k++;
	else
	j++;
    }
}
printf ( "vowels %d",k ) ;  
printf ("consonants %d",j);
return 0;
}
