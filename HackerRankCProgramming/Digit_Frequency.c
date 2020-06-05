#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char s[1000];
    int arr[10]={0},i=0;
    scanf("%s",&s);
    while(s[i] != '\0')
    {
        if(s[i]>='0' && s[i]<='9')
        {
            arr[s[i]-'0'] +=1;
        }
        i++;
    }
    for(i=0; i<10; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

