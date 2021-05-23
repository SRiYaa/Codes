// WAP to check MSB of a number is set or not.

    printf("Enter a number ");
    scanf("%d",& num);
    i=1, total=0;
    while(num !=0)
    {
        b= num%2;
    	total = total+ b*i;
    	i*= 10;
    	num=num/2;

	}
	t = total;
	while(total!=0)
	{	
	n++;
	total=total/10;	
	}
	printf("%d",n);
    { 
	m=t%10;
    t=t/10;
    n--;
	}
   
   if(m==1)
   { printf("LSB is a set");  }
   else
   { printf("LSB is not a set");  }
   
