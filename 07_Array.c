// Arrays
// #include<stdio.h>

// int main(){

//     int marks[] = {97,98,96};

//     int n = marks[0];
//     printf("%d\n", n);
//     return 0;
// }





// Q1. Write a program to enter price of 3 items & print thier final cost with GST.

// #include<stdio.h>

// int main(){

//     int price[3];

//     printf("Enter 1st Price: ");
//     scanf("%d", &price[0]);
    
//     printf("Enter 2nd Price: ");
//     scanf("%d", &price[1]);

//     printf("Enter 3rd Price: ");
//     scanf("%d", &price[2]);

//     printf("Final price of 1st is %f\n", price[0] + price[0] * 0.18);
//     printf("Final price of 2nd is %f\n", price[1] + price[1] * 0.18);
//     printf("Final price of 3rd is %f\n", price[2] + price[2] * 0.18);

//     return 0;


// }





// 
// #include<stdio.h>

// int main(){

//     int age = 23;
//     int *ptr = &age;
//     printf("ptr = %u\n", ptr);

//     ptr++;
//     printf("ptr = %u\n", ptr);
    
    
//     return 0;
// }



// //
// #include<stdio.h>

// void printNumber(int arr[], int n);
// int main(){
    
//     int arr[] = {0,1,2,3,4,5,6,7,8,9};
//     printNumber(arr, 10);
//     return 0;
// }

// void printNumber(int arr[], int n){
//     for(int i=0; i<n; i++){
//         printf("%d \t", arr[i]);
//     }
//     printf("\n");
// }



// Q. Write a function to count the number of odd numbers in an array.

// #include<stdio.h>

// void countNumber(int arr[], int n);

// int main(){
//     int arr[] = {0,1,2,3,4,5,6,7,8,9};
//     countNumber(arr, 10);
//     return 0;
// }

// void countNumber(int arr[], int n){
//     int count = 0;
//     for(int i = 0; i<n; i++){
//         if(arr[i] % 2 == 1){
//             count = count + 1;
//         }
//     }
//     printf("%d", count);
// }




// Write a program to store first n fibonacci numbers.

// #include<stdio.h>

// int main(){

//     int n;
//     printf("Enter n (n > 2): ");
//     scanf("%d", &n);

//     int fib[n];
//     fib[0] = 0;
//     fib[1] = 1;

//     for (int i = 2; i<n; i++) {
//         fib[i] = fib[i-1] + fib[i-2];
//         printf("%d\t", fib[i]);
//     }
//     printf("\n");
//     return 0;

// }





// Create a 2D array, storing the tables of 2 & 3.

#include<stdio.h>

int main(){

    int table[2][10];

    for (int i = 0; i < 2; i++) {  // i = 0 for 2, i = 1 for 3
        for (int j = 0; j < 10; j++) {
            table[i][j] = (i + 2) * (j + 1);  // Tables of 2 and 3
        }
    }

    // Print the tables
    for (int i = 0; i < 2; i++) {
        printf("Table of %d:\n", i + 2);
        for (int j = 0; j < 10; j++) {
            printf("%d\t", table[i][j]);
        }
        printf("\n");
    }

    return 0;
}
