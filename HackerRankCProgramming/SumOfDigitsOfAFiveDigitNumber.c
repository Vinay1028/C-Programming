#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int sum=0;
    int digit;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    if(n>=10000 && n <= 99999)
    {
        while(n>0)
        {
            digit = n%10;
            sum += digit;
            n /= 10;
        }
        printf("%d",sum);
    }
    return 0;
}


