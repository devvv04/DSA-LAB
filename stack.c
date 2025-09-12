//operations on stack

#include <stdio.h>
#define MAX 5

int main() {
    int stack[MAX] = {10, 20, 30};  
    int top = 2;  

    
    printf("Initial stack: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");

    // PUSH operation (adding 40)
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push 40\n");
    } else {
        top++;
        stack[top] = 40;
        printf("40 pushed to stack.\n");
    }

   
    printf("Stack after push: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");

    // POP operation
    if (top == -1) {
        printf("Stack Underflow! Nothing to pop.\n");
    } else {
        printf("%d popped from stack.\n", stack[top]);
        top--;
    }

    printf("Stack after pop: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");

    return 0;
}
