Q1 Write a c program to swap the two numbers using third variable 
  
#include<stdio.h>
int main(){
int	a=10, b=20,c;
c=a;
a=b;
b=c;


printf("a=%d,b=%d",a,b);
	
	
}



Q2 Write a c program to swap the two numbers without using third variable
#include<stdio.h>
#include<conio.h>
int main(){
int a=10,b=20;
a=a+b;
b=a-b;
a=a-b;

printf("a=%d,b=%d",a,b);		
}


Q3 write a c program to perform addition of two variables without using + operator
#include<stdio.h>
int main(){
	int a=20,b=5;
	printf("%d",a-(-b));
}



Q4 Finding next / previous multiple of given no without using if..else or ternary op.
#include<stdio.h>
int main(){
	int n;
	printf("enter your number ");
	scanf("%d",&n);
	n%10>=5&&printf("%d",((n/10)+1)*10)||printf("%d",(n/10)*10);
}


Q5 Finding even/odd without using if..else/ternary op:
#include<stdio.h>
int main(){
	int n;
	printf("enter your number ");
	scanf("%d",&n);
	n%2==0&&printf("Even")||printf("Odd");
}
