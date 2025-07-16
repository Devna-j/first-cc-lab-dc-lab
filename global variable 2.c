#include<stdio.h>
int a[5],pos=-1;
void insert(int e)
{
	if (pos+1==5)
	{
		printf("error:array is full");
	}
	else
	{
		a[++pos]=e;
	}
}
void delete()
{
	if (pos==-1)
	{
		printf("error:array is empty");
	}
	else
	{
		printf("\n%d",a[pos--]);
	}
}
int menu()
{
	int ch;
	printf("\n INSERT-1 \n DELETE-2 \n DISPALL-3 \n EXIT-4 \n ENTER your choice");
	scanf("%d",&ch);
	return ch;
}
void processArray()
{
	int ch;
	for(ch=menu();ch!=4;ch=menu())
	{
		switch(ch)
		{
			case 1:
				printf("enter the value to insert");
				scanf("%d",&ch);
				insert(ch);
				break;
			case 2:
				delete();
				break;
			case 3:
				display();
				break;
			default :
				printf("error:wrong choice");
				break;
		}
	}
}
int main()
{
	processArray();
	return 0;
}
void display()
{
	int i;
	for(i=0;i<=pos;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
