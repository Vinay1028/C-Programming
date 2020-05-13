#include<stdio.h>
void swap(int, int);
 int main()
 {
 	int a, b;
 	printf("Enter two numbers : \n");
 	scanf("%d%d",&a,&b);
 	printf("\n\nThe values of a and b before swapping a = %d and b = %d",a,b);
 	swap(a,b); 
	 	
 }
 
void swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("\n\nafter swapping  a = %d and b = %d",a,b);
	
}
