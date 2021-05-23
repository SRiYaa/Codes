#include<stdio.h>
int main( ) 
{
char sent[100] ; 
int i=0,j=0;
printf ( "Enter a Sentence : " ) ;  
gets ( sent ) ;  
while(sent[i] != '\0')
{
	if(sent[i]== ' ')
	{
		j++;
	}
	i++;
}
printf ( "Total number of words = %d",j+1 ) ;  
return 0;
} 
 
