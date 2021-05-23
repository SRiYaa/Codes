#include<stdio.h>
int main( ) 
{
char s1[100] ; 
char s2[100] ; 
int i=0,j=0,k=0;
printf ( "Enter 2 strings to compare \n" ) ;  
gets ( s1 ) ;
gets ( s2 ) ;
while(s1[k] != '\0')
{
	i++;
	k++;
}
k=0;
while(s2[k] != '\0')
{
	j++;
	k++;
}
if(i==j)
printf("Strings are similar");
else
printf("Strings are not similar");
return 0;
}
