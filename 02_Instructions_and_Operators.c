// Q1. WAP to check if a number is divisible by 2 or not.


// #include<stdio.h>
// #include<math.h>

// int main(){

//     int a;
//     printf("Enter Number: ");
//     scanf("%d", &a);

//     printf("%d", a % 2 == 0);

//     return 0;
// }



// Q2. WAP to check if a number is odd or even.


// #include<stdio.h>
// #include<math.h>

// int main(){

//     int a;
//     printf("Enter Number: ");
//     scanf("%d", &a);
//         printf("The number is a Even number %d", a % 2 == 0);

//     return 0;
// }



// Q3. If number is greater than 9 and smaller than 100 -> True.


// #include<stdio.h>
// #include<math.h>

// int main(){

//     int a;
//     printf("Enter Number: ");
//     scanf("%d", &a);

//     printf("%d", a > 9 && a < 100);

//     return 0;
// }



// Q4. WAP to print the average of 3 numbers.

// #include<stdio.h>
// #include<math.h>

// int main(){

//     int num1, num2, num3;
//     printf("Enter Number 1: ");
//     scanf("%d", &num1);
//     printf("Enter Number 2: ");
//     scanf("%d", &num2);
//     printf("Enter Number 3: ");
//     scanf("%d", &num3);

//     printf("The Average of 3 numbers is %d", (num1 + num2 + num3) / 2);

//     return 0;
// }



// Q5. WAP to check if given character is digit or not.

// #include<stdio.h>
// #include<math.h>

// int main(){

//     char ch;
//     printf("Enter Character: ");
//     scanf("%c", &ch);

//     if (ch >= '0' && ch <= '9'){
//     printf("The Character is a Digit %c", ch);
//     }

//     else{
//         printf("The Character is not a Digit");
//     }

//     return 0;
// }




// Q6. WAP to print the smallest number.
#include <stdio.h>

int main() {
    int a, b, c;

    // Input numbers one by one
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    int smallest = a;

    if (b < smallest)
        smallest = b;
    if (c < smallest)
        smallest = c;

    printf("The Smallest number is: %d\n", smallest);

    return 0;
}

