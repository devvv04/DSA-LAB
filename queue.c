#include <stdio.h>
#define MAX 10   // maximum size of queue

int main() {
    int queue[MAX];
    int n, value;

    // Step 1: Take initial elements
    printf("Enter number of initial elements in queue (max %d): ", MAX);
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &queue[i]);
    }

    int front = 0;      // first element index
    int rear = n - 1;   // last element index

    // Step 2: Enqueue a new element
    printf("Enter a number to enqueue: ");
    scanf("%d", &value);

    if (rear == MAX - 1) {
        printf("Queue Overflow! Cannot insert.\n");
    } else {
        rear++;
        queue[rear] = value;
        printf("%d enqueued successfully.\n", value);
    }

    // Step 3: Dequeue one element
    if (front > rear) {
        printf("Queue Underflow! Queue is empty.\n");
    } else {
        printf("%d dequeued successfully.\n", queue[front]);
        front++;   // move front ahead
    }

    // Step 4: Display final queue
    if (front > rear) {
        printf("Queue is now empty.\n");
    } else {
        printf("Final Queue: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }

    return 0;
}
