// Online C compiler to run C program online
//WAP to find the electrivity bill for the following dara: 1-100 unit = 3/unit ; 101-300 unit = 5/unit; 300+ = 6/unit
#include <stdio.h>

int main() {
    int unit;
    int price;
    printf("Enter the number of units: ");
scanf("%d",&unit);
if(0<unit && unit<100){
    price = unit * 3;
}
else  if(100<unit && unit<300){
    price = unit * 5;
}
else if(unit>300){
    price = unit * 6;
}
else{
    printf("Units cannot be negative");
}
printf("Price is: %d",price);
    return 0;
}
