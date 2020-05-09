#include<stdio.h>
#include<conio.h>

int main()
{
  int array[20], n, i, atPos, newElement;
 // clrscr();
  printf("Enter the size of the array");
  scanf("%d",&n);
  if(n>20)
  {
    printf("Invalid array size.");
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
   
   printf("\n\nEnter the location where you want to store new element : \n");
   scanf("%d",&atPos);
   if(atPos<=0 || atPos>n+1)
   {
     printf("\nInvalid location to insert the element.\n");
   }
   else
   {
    if(n==20)
   {
    printf("Array Overflow");
   }
   else
   {
   printf("\nEnter the element that you want to insert : \n");
   scanf("%d",&newElement);
   for(i=n-1; i>=atPos-1; i--)
   {
     array[i+1]=array[i];
   }
   array[atPos-1]=newElement;
   printf("\n\nThe array elements after insertion are : \n\n");
   for(i=0; i<=n; i++)
   {
     printf("%d\t",array[i]);
   }
}

   }
}
getch();
return 0;
}
