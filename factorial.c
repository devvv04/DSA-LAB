// Online C compiler to run C program online
//Factorial
#include <stdio.h>

int main() {
    int n,i;
    int fact = 1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    fact = fact*i;
    }
    printf("factorial is: %d",fact);
    
    return 0;
}
