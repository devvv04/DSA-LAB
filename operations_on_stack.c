// stack operations taking user input
#include <stdio.h>
# define MAX 10
int main() {
    int a;
    int stack[MAX];

printf("Enter number of elements you want in initial stack (1-10): ");
    scanf("%d", &a);
if(a<1 || a>MAX){
    printf("Invalid number");
}
int top = a-1;
printf("Enter %d elements: \n",a);
for(int i = 0;i<a;i++){
    scanf("%d", &stack[i]);
}
printf("Initial stack: ");
for(int i=top;i>=0;i--){
    printf("%d ", stack[i]);
}
printf("\n");
int pu;
int po;
printf("Enter an element to PUSH: ");
scanf("%d",&pu);
top ++;
stack[top] = pu;
printf("%d is pushed \n",pu);
printf("stack after PUSH : ");
for(int i=top;i>=0;i--){
    printf("%d ", stack[i]);
}



    return 0;
}
