#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    int i;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    const char* string[] = {"one","two","three","four","five","six","seven","eight","nine"};
    for(i=a; i<=b; i++)
    {
        if(i>=a && i<=9)
            printf("%s\n",string[i-1]);
        else {
                if(i%2==0)
                    printf("even\n");
                else {
                    printf("odd\n");
                }
        }

    }

    return 0;
}


