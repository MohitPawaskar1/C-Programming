// FOR LOOP

#include<stdio.h>

// int main(){

//     for (int i = 1; i<=10; i = i+1){
//         printf("%d \n", i);
//     }
//     return 0;
// }




// WHILE LOOP

// #include<stdio.h>

// int main(){

//     int num;
//     printf("Enter the Number: ");
//     scanf("%d", &num);

//     int i = 1;
//     while (i <= num)
//     {
//         printf("%d \n", i);
//         i++;
//     }
    
//     return 0;
// }




// Print the table

// #include<stdio.h>

// int main(){

//     int n;
//     printf("Enter Number: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= 10; i++){
//         printf("%d \n", n*i);
//     }
// }




// Keep taking numbersas input fro user until user enters and odd number.

// #include<stdio.h>

// int main(){

//     int n;
//     do {
//         printf("Enter Number: ");
//         scanf("%d", &n);
//         printf("%d\n", n);
//         if(n % 2 != 0){
//             break;
//         }
//     }while (1);
//     printf("Thanks");
//     return 0;
    
// }



// skip 6

// #include<stdio.h>

// int main(){

//     for(int i = 1; i <= 10; i++){
//         if (i == 6){
//             continue;
//         }
//         printf("%d\n", i);
//     }

//     return 0;
// }




// 5 - 50 all odd

// #include<stdio.h>

// int main(){

//     for(int i = 5; i <= 50; i+=2){
//         // if (i == 6){
//         //     continue;
//         // }
//         printf("%d\n", i);
//     }

//     return 0;
// }



// factorial

// #include<stdio.h>

// int main(){

//     int n;
//     printf("ENter Number: ");
//     scanf("%d", &n);

//     int fact = 1;
//     for(int i = 1; i <= n; i++){

//         fact = fact * i;
//     }

//     printf("Factorial is %d", fact);
//     return 0;
// }




// table in reverse

// #include<stdio.h>

// int main(){

//     int n;
//     printf("Enter Number: ");
//     scanf("%d", &n);

//     for(int i = 10; i >= 1; i--){
//         printf("%d \n", n * i);
//     }

//     return 0;
// }




// Calculate the sum of all numbers between 5 and 50.

// #include<stdio.h>

// int main(){

//     int sum = 0;

//     for(int i = 5; i <= 50; i++){
//         sum = sum + i;
//     }

//     printf("%d", sum);

//     return 0;
// }




/*
        *****
        *****
        *****
        *****
        *****

*/

// #include<stdio.h>

// int main(){

//     for(int i = 1; i <=5; i++){
//         for(int j = 1; j <=5; j++){
//             printf("*");     // ✅ Use double quotes
//         }
//         printf("\n");        // ✅ Use double quotes
//     }

//     return 0;
// }





// WAP to check if the Number is prime or not.

#include<stdio.h>

int main() {
    int n, isPrime = 1;

    printf("Enter Number: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("It's a Prime Number.\n");
    else
        printf("Not a Prime Number.\n");

    return 0;
}
