#include<stdio.h>
#include<conio.h>

void main()
{
 int grid[30][30],rows, columns, i, j, conn[30],count=0, arr[30], totalconnection=0;
 clrscr();
 printf("Enter no of rows and no of Columns : \n");
 scanf("%d%d",&rows,&columns);
 printf("Enter grid elements :");
 for(i=0; i<rows; i++)
 {
   for(j=0; j<columns; j++)
   {
     scanf("%d",&grid[i][j]);
   }
 }
// logic to get connections in each row
 for(i=0; i<rows; i++)
 {
    for(j=0; j<columns; j++)
    {
      if(grid[i][j]==1)
      {
	++count;
      }
    }
    arr[i]=count;
    count=0;
 }
 for(i=0; i<rows-1; i++)
 {
   totalconnection += arr[i]*arr[i+1];
 }
 printf("TotalConnection = %d",totalconnection);
 getch();
}