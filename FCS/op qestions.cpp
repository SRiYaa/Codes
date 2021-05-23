#include<stdio.h>
int main()
{
/*	static int var=5;
	printf("%d",var--);
	if(var)
	main(); 
	int i=2;
	int j= ++i +i;
	printf("%d",j);
	int x=10,y=20,z=5,i;
	i=x<y<z;
	printf("%d",i);*/
	char *p1,*p2;
	char str[]="helloworld";
	p1=&str[2];
	p2=str+5;
	printf("%c",++*str - --*p1+*p2);
	printf("%s",str);
}
