#include<stdio.h>
int c=5;
void display()
{
	int a=10;static b=5;register d=6;
	
	printf("register variable d =%d\n",d);
	printf("local variable a=%d\n",a);
	printf("static variable b=%d\n",b);
	printf("global variable c=%d\n",c);
}
int main()
{
	display();
	return 0;
} 
