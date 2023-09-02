#include<stdio.h>
#include<conio.h>
#include<math.h>
// This the Program to find Area of Traingle
int main()
{
	float H,B,A;
	printf("enter Height and Base");
	scanf("%f%f",&H,&B);
	A=(H*B)/2;
	printf("Area of Trangle is %.2f ",A);
	
	return 0;
}

// This the program of Area of Circle//
int main()
{
	float R,A;
	printf("enter the radius of circle ");
	scanf("%f",&R);
	float Pi=3.14;
	A=Pi*R*R;
	printf("Area of Circle %.2f",A);
	
	return 0;
}

//This is the program for finding Coumpund Interest //
int main()
{
	float P,r,n,t,C;
	printf("enter the Priciple  ");
	 scanf("%f",&P);
	printf("\nenter the rate  ");
		scanf("%f",&r);
	printf("\nenter the number of compounding periods per unit  ");
	 scanf("%f",&n);
	printf("\nenter the time  ");
	 scanf("%f",&t);
	C=P * pow((1 + r/n), (n*t));
	printf("Compound Interest is %.2f",C);
	
	return 0;
}
	
	// This the Program of Cube of Number// 
int main()
{
	float C,S;
	printf("enter the number  ");
	scanf("%f",S);
	C=S*S*S;
	printf("Cube of Number is %.2f ",C);
	
	return 0;
	}	

