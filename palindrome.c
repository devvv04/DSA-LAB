// Online C compiler to run C program online
//palindrome
#include <stdio.h>

int main() {
    int a;
    int temp;
    int palin = 0;
    int digit;
    printf("Enter a number :");
scanf("%d",&a);
temp = a;
while(a>0){
    digit = a % 10;
    palin = palin * 10 + digit;
    a = a / 10;
}

if(palin == temp){
    printf("It is palindrome");
}
else{
    printf("It is not palindrome");
}
    return 0;
}
