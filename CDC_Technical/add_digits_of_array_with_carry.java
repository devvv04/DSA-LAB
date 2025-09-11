// Given two integer arrays num1 and num2 where each array represents a number with each element being a digit (from left to right), write a program that adds the two numbers digit by digit starting from the rightmost digit, accounts for carry, and outputs the sum as an integer.

class Main {
    public static void main(String[] args) {
       int[] num1 = {1,2,5};  
       int[] num2 = {4,5,9};
       int sum = 0;
       int final_sum = 0;
       int carry = 0;
       int i = num1.length - 1;
        int j = num2.length - 1;
int k = 1;
while(i>=0 || carry!=0){

sum = carry + num1[i] + num2[j];
int add = sum % 10;
carry = sum / 10;
final_sum = final_sum + add * k;
k = k*10;
i--;
j--;

}
System.out.println(final_sum);
    }
}
