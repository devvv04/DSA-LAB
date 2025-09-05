#include <stdio.h>

#define MAX 100

// Function to insert
void insert(int arr[], int *n, int element, int pos) {
    if (*n >= MAX) {
        printf("Array is full. Cannot insert.\n");
        return;
    }
    if (pos < 0 || pos > *n) {
        printf("Invalid position.\n");
        return;
    }
    for (int i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    (*n)++;
}

// Function to delete
void delete(int arr[], int *n, int pos) {
    if (*n <= 0) {
        printf("Array is empty. Cannot delete.\n");
        return;
    }
    if (pos < 0 || pos >= *n) {
        printf("Invalid position.\n");
        return;
    }
    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

// Linear search function
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

// Binary search function
// Assumes array is sorted
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

//function to print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX], n, choice, element, pos, key, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n > MAX) {
        printf("Max allowed elements is %d\n", MAX);
        return 1;
    }

    printf("Enter %d elements (sorted if you want to use binary search):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Linear Search\n");
        printf("4. Binary Search\n");
        printf("5. Print Array\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
           case 1:  // Insert
    printf("Enter element to insert: ");
    scanf("%d", &element);
    printf("Enter position to insert (0 to %d): ", n);
    scanf("%d", &pos);
    insert(arr, &n, element, pos);
    printf("Array after insertion: ");
    printArray(arr, n);
    break;

case 2:  // Delete
    printf("Enter position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);
    delete(arr, &n, pos);
    printf("Array after deletion: ");
    printArray(arr, n);
    break;

            case 3:
                printf("Enter element to search (linear): ");
                scanf("%d", &key);
                result = linearSearch(arr, n, key);
                if (result == -1)
                    printf("Element not found.\n");
                else
                    printf("Element found at index %d\n", result);
                break;

            case 4:
                printf("Enter element to search (binary): ");
                scanf("%d", &key);
                result = binarySearch(arr, n, key);
                if (result == -1)
                    printf("Element not found.\n");
                else
                    printf("Element found at index %d\n", result);
                break;

            case 5:
                printf("Array elements: ");
                printArray(arr, n);
                break;

            case 6:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
