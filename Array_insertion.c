//insertion in array
#include <stdio.h>

int main() {
    // int arr[10] = {10,20,30,40,50};
    // int n = 5;
    // int new_num = 25;
    // int position = 2;
    int n,arr[100];
    printf("Enter number of elements you want in your array: ");
    scanf("%d",&n);
    
    printf("Enter %d elements of array: ",n);
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    
    printf("Array before insertion: \n");
    for(int i=0;i<n;i++){
        printf("%d ", arr[i] );
    }
    printf("\n");
    int new_num,position;
    printf("Enter element you want to insert: \n");
    scanf("%d",&new_num);
    printf("Enter position where you want to insert %d: \n",new_num);
    scanf("%d",&position);
    
    for(int i = n;i>position;i--){
        arr[i] = arr[i-1];
    }
    arr[position] = new_num;
    n++;
     printf("Array after insertion: ");
    for(int i= 0;i<n;i++){
     printf("%d ",arr[i]);
    }
    return 0;
    
}
