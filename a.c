#include <stdio.h>
int mul(int a, int b)
{
	return (a*b);
}
int sub(int a,int b)
{
	int c;
	c = a - b;
	return c;
}
int add(int a,int b)
{
	int c;
	c = a + b;
	return c;
}
int main()
{
	int a,b,c;
	printf("Enter 2 numbers:\n");
	scanf("%d%d",&a,&b);
	printf("Difference:%d",sub(a,b));
	printf("\nAddition:%d\n",add(a,b));
}
