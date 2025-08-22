// Online C compiler to run C program online
//HCF of 2 numbers
#include <stdio.h>

int main() {
    int a;
    int b;
    int r;
    printf("Enter first number: ");
    scanf("%d",&a);
     printf("Enter second number: ");
    scanf("%d",&b);
     while (b != 0) {
       r = b;
        b = a % b;
        a = r;
    }
         printf("hcf is: %d",a);
    
   
    return 0;
}
