// It is the Program for checking whether the number is even or odd 

#include<stdio.h>
#include<conio.h>

int main()                           
{
	int a;                                                          
	printf("enter a number to check if its even or not: \n");          
	scanf("%d",&a);          
	printf((a%2==0)? "a is even":"a is odd");                     		                   
	return 0;                                    
}




// It is the Program for finding the lowest marks of student among all three students
#include<stdio.h>
#include<conio.h>

int main()                           
{
	int a,b,c;                                                         
	printf("enter the marks of first student :\n");          
	scanf("%d",&a);    
	printf("enter the marks of second student :\n");          
	scanf("%d",&b);  
	printf("enter the marks of third student :\n");          
	scanf("%d",&c);        
	int d = (a<b)?(a<c?a:c):(b<c?b:c);   
	printf("%d is lowest marks  of all students",d);                                        
	return 0;                                    
}

//It is the Program for checking which number is greater


#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;
	printf("enter the numbers" );
	scanf("%d%d",&a,&b);
	int d = a>b;
	printf("%d",d);
	return 0; 
}


// It is the Program for solving the Query
#include<stdio.h>
#include<conio.h>

int main()
{
	int a=10,b,c,d,e,f,g,h,i;
	b=a++;
	c=a&b;
	c*=a;
	d=--b;
	d%=c;
	e=a&&c;
	f=d^b;
	g=a>>2;
	h=b<<2;
	i=h|c;
	printf("a=%d b=%d c=%d d=%d e=%d f=%d g=%d h=%d i=%d",a,b,c,d,e,f,g,h,i);
	return 0; 
}

// It is the Program for finding the amount with simple interest 
#include<stdio.h>
#include<conio.h>

int main()
{
	int P,R,T,AM;
	scanf("%d %d %d",&P,&R,&T);
	AM = (P*R*T)/100 + P;
	printf("%d",AM);
	return 0;
}









