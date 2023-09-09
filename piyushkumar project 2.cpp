// Program for finding area and perimeter of traingle 
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	float l,b;
	printf("enter lenght and breadth");
	scanf("%f%f",&l,&b);
	float a=l*b;
	float d=2*(l+b);
	printf("area is :%.2f\nperimeter is :%.2f",a,b);
	
	return 0;
}

// Program of swapping two numbers without any opreator 
#include<stdio.h>
#include<conio.h>
#include<math.h>
	
int main()
{

	
	float a,b,c;
	printf("enter both vale:");
	scanf("%f%f",&a,&b);
	printf("before swaping value %.2f,%.2f",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nafter swapin value %.2f,%.2f",a,b);

	return 0;
}


//Program of swaping two using Airthmatic Operator
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{

	
	float a,b;
	printf("Enter the value ");
	scanf("%f%f",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swaping number %.2f,%.2f",a,b);
	return 0;


}

//Program of finding size of every datatype
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{

    printf("size of char : %d",sizeof(char));
	printf("\nsize of int : %d",sizeof(int));
	printf("\nsize of float : %d",sizeof(float));
	printf("\nsize of double : %d",sizeof(double));
	printf("\nsize of long : %d",sizeof(long));
	printf("\nsize of short int : %d",sizeof(short int));
	
	return 0;
}
	

	
	


