//Author : Vinay Singh
//Date : 12/04/2020
//Scientific calculator without using library functions 
#include<stdio.h>
#include<conio.h>

 unsigned int logcalc(unsigned int num1, unsigned int num2)
 {
 	return (num1>1) ? 1 + logcalc(num1/num2, num2) : 0;
 }

int main()
{
   int choice;
   printf("1 : for Square root\n");
   printf("2 : for Power of\n");
   printf("3 : for Factorial\n");
   printf("4 : for Power of 2\n");
   printf("5 : for Log\n");
   printf("\n\nEnter your choice : \n");
   scanf("%d",&choice);
   switch(choice)
   {
     case 1:
	     {
	      int num;
	      double i, precision = 0.00001 ;
	      printf("Enter the number : ");
	      scanf("%d",&num);
	      for(i=1; i*i<=num; i++);  			//calculates the integer part of sqrt
	      for(--i; i*i<num; i = i+precision);	//calculates the fraction part of the integer
	      printf("Square root : %lf",i);
		  break;
	     }
	 
	 case 2:
	 	{
	 		int num, power,i,result = 1;
	 		printf("Enter the number and its power : ");
	 		scanf("%d%d",&num,&power);
	 		for(i=1; i<=power; i++)
	 		{
	 			result *= num;
			 }
			 printf("Power of %d is : %d",num,result);
			 break;
		 }
		 
	 case 3:
	 	{
	 		int num,i,fact=1;
	 		printf("\nEnter the number : ");
	 		scanf("%d",&num);
	 		if(num == 0 || num == 1)
	 		{
	 			printf("\nFactorial of %d is : %d",num,1);
			 }
			 else if(num < 0 )
			 {
			 	printf("\nFactorial of negative numbers does not exist");
			 }
			 else
			 {
	 		  for(i=num; i>1; i--)
	 		  {
	 			fact *= i;
			  }
			 printf("Factorial of %d is : %d",num,fact);
	 	}
	 	     break;
		 }
		 
	 case 4:
	 	{
	 		int num, i,result=1;
	 		printf("\nEnter the power : ");
	 		scanf("%d",&num);
	 		for(i=1; i<=num; i++)
	 		{
	 			result *= 2;
			 }
			 printf("%d ^ %d is : %d",2,num,result);
			 break;
		 }
	 case 5:
	 	{
	 		unsigned int num1, num2;
	 		printf("\nEnter the number : ");
	 		scanf("%u",&num1);
	 		printf("\nEnter the base: ");
	 		scanf("%u",&num2);
	 		printf("\n\nthe log of %u on base %u is : %u ",num1,num2,logcalc(num1,num2));
	 		break;
		 }
	 default:
	 	{
	 		printf("you have made a wrong choice");
		 }
   }
 return 0;
}
