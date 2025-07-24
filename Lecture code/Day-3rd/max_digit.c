#include<stdio.h>

int main(){
    int n,max_digit=0,digit,y,i;
    printf("Enter a number");
    scanf("%d",&n);
    y=n;
    for(i=1;i<=n;i++)
    {
        digit=n%10;
        n=n/10;
        if(max_digit<digit)
           max_digit=digit;
    }
    printf("Highest digit in %d is %d",y,max_digit);
    return 0;
}