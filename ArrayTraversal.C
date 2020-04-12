#include<stdio.h>
#include<conio.h>

int main()
{
 int array[20], i, n;
 clrscr();
 printf("enter the size of the array : ");
 scanf("%d",&n);
 if(n>=20)
 {
  printf("array range is invalid");
 }
 else
 {
   printf("Enter the array elements : \n\n");
   for(i=0; i<n; i++)
   {
     scanf("%d",&array[i]);
   }
   printf("\n\nThe array elements are : \n\n");
   for(i=0; i<n; i++)
   {
     printf("%d\t",array[i]);
   }
}
getch();
return 0;
}