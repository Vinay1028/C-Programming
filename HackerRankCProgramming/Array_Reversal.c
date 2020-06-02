#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    int temp;
    int j;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    /* Write the logic to reverse the array. */
    /*for(i=0,  j=num-1; i<num; i++, j--)
    {
        temp = arr[i]   ;
        arr[i]=arr[j];
        arr[j]=temp;
    }*/
    for(i = num-1; i >=0; i--)
        printf("%d ", *(arr + i));    
    return 0;
}


