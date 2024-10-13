#include<stdio.h>
main()
{
	int a,b,c,d,e,f,g;
	printf("entre the value of a and b\n");
	scanf("%d %d", &a,&b);
	c= a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	g=a%b;
	printf("addition is:%d\n", c);
	printf("subtraction is:%d\n",d);
	printf("multiplication is:%d\n",e);
	printf("division is:%d\n",f);
	printf("reminder is:%d\n",g);
}
