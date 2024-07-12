Q4.write a c program to reverse a two digit number without using any loop
#include<stdio.h>
int main(){

int a=13;

printf("a=%d%d",a%10,a/10,a);

}



Q5write a c program to find the previous multiplication of 100 of a given three digit number.
#include<stdio.h>
int main(){
	int a=228;
	a=(a/100)*100;
	printf("%d",a);
//	a>=5&&printf("%d",a/10*10)||printf("%d",((a/10)+1)*10);
}



Q6 write a c program two add each digit of a given two digit number 
#include<stdio.h>
int main(){
	int a=67;
	printf("%d",a%10+a/10,a);
}


7 write a c program to find the next multiple of 10 of a given two digit number, if the given number's last digit is less than 5 then 
find the previous multiple of 10 and if the given number's last digit ig grater than or equal to 5 then find next multiple of 10. 
#include<stdio.h>
int main(){
  int a,b;
	printf("enter your number ");
	scanf("%d",&a);
	
//	a>=5||printf("%d",a/10*10)||printf("%d",(a/10)+1*10);
  
b=a%10;
a=a/10;
b>=5? printf("%d",(a+1)*10):printf("%d",(a)*10);
	
}


Q8Write a c program to find the max in 2 no’s without
using if..else or ternary operator.
#include<stdio.h>
int main(){
	int a,b;
	printf("enter your number ");
	scanf("%d ,%d",&a,&b);
	a>b&&printf("a is big");
	b>a&&printf("b is big");
	a==b&&printf("both are equal");
}

