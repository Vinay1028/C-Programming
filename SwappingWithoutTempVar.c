#include<stdio.h>
void swap(int, int);
int main()
{
	int a, b;
	printf("enter the values of a and b :\n");
	scanf("%d%d",&a,&b);
	printf("\n\nThe values of a and b before swapping a = %d and b = %d",a,b);
	swap(a,b);
}
void swap(int a, int b)
{
	a = a+b;
	b = a-b;
	a = a-b;
    printf("\n\nafter swapping  a = %d and b = %d",a,b);
    return 0;
}
