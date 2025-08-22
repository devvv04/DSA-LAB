// Online C compiler to run C program online
//to find the list of nos. that are divisible by 3 & 5
#include <stdio.h>

int main() {
    int max;
    
    int i;
    printf("Enter a number you want to see the list: ");
    scanf("%d",&max);
    for (i=1;i<=max;i++){
        if (i%3 ==0 && i%5 ==0){
            printf("%d\n",i);
        }
    }

    return 0;
}
