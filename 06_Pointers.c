// #include<stdio.h>

// int main(){

//     int age = 23;
//     int *ptr = &age;
    
//     //address
//     printf("%u\n", &ptr);


//     //value
//     printf("%d\n", age);
//     printf("%d\n", *ptr);
//     printf("%d\n", *(&age));


//     return 0;
// }





// #include<stdio.h>

// int main(){

//     int x;
//     int *ptr;

//     ptr = &x;
//     *ptr = 0;

//     printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);

//     *ptr += 5;

//      printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);

//     (*ptr)++;

//     printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);
// }





// Pointer to Pointer

// #include<stdio.h>

// int main(){

//     // float price = 100;
//     // float *ptr = &price;
//     // float **pptr = &ptr;

//     int i = 5;
//     int *ptr = &i;
//     int **pptr = &ptr;

//     printf("%d\n", **pptr);
//     return 0;
// }





// Swap

// #include<stdio.h>

// void swap(int a, int b);
// void _swap(int *a, int *b);

// int main(){
    
//     int x = 3, y = 5;
//     _swap(&x,&y);
//         printf("x = %d & y = %d\n", x, y);
//     return 0;
// }

// // call by value
// // void swap(int a, int b){

// //     int t = a;
// //     a = b;
// //     b = t;
// //     printf("a = %d & b = %d\n", a,b);
// // }

// // call by refernece
// void _swap(int *a, int *b){

//     int t = *a;
//     *a = *b;
//     *b = t;
//     //printf("a = %d & b = %d\n", a,b);
// }




//
// #include<stdio.h>

// void printAddress(int n);

// int main(){
//     int n = 4;

//     printf("%p\n", &n);
//     printAddress(n);
//     return 0;
// }

// void printAddress(int n){
//     printf("%d\n", &n);
// }




// Write a function to calculate the sum, product & average of 2 numbers. Print that average in the main function.

#include<stdio.h>

void doWork(int a, int b, int *sum, int *prod, int *avg);

int main(){
    int a = 3, b = 5;
    int sum, prod, avg;

    doWork(a, b, &sum, &prod, &avg);
    printf("Sum = %d, Prod = %d, Avg = %d\n", sum, prod, avg);
    return 0;
}

void doWork(int a, int b, int *sum, int *prod, int *avg){

    *sum = a + b;
    *prod = a * b;
    *avg = (a + b)/2;
}

