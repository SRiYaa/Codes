#include<stdio.h>
#include <stdlib.h>
int main()
{   
  char str[20];
  int i=0;
  printf("Enter String: ");
  gets(str);
  int count = 0;
  while (str[i] != '\0')
  {
  	if(str[i] == '}' || str[i] == '{')
  	{
    if (str[i] == '}')
        count--;
    else if (str[i] == '{')
        count++;
    if (count < 0)
    {
        printf("\nInvalid");
        break;
    }   
    i++;    
    }
    else if(str[i] == ']' || str[i] == '[]')
  	{
    if (str[i] == ']')
        count--;
    else if (str[i] == '[')
        count++;
    if (count < 0)
    {
        printf("\nInvalid");
        break;
    }   
    i++;    
    }
    else
  	{
    if (str[i] == ')')
        count--;
    else if (str[i] == '(')
        count++;
    if (count < 0)
    {
        printf("\nInvalid");
        break;
    }   
    i++;    
    }
  }
  if (count == 0)
  printf("\nValid");
  return 0;
 }

