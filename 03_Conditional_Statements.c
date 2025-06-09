/* Q1. WAP to chec if a student passed or failed.
    marks > 30 is PASS
    marks <= 30 is FAIL 
*/

// #include<stdio.h>

// int main(){

//     int marks;
//     printf("Enter Marks: ");
//     scanf("%d", &marks);
    
//     marks > 30 ? printf("PASS") : printf("FAIL");

//     return 0;
// }




/* Q2. WAP to give grades to a student
    marks < 30 is c
    30 <= marks <70 is B
    70 <= marks <90 is A
    90 <= marks <=100 is A+ */


// #include<stdio.h>

// int main(){

//     int marks;
//     printf("Enter Marks: ");
//     scanf("%d", &marks);

//     if (marks < 0 || marks > 100){
//         printf("Invalid Marks..");
//     } 

//     else if (marks < 30){
//         printf("The Student got C grade.\n");
//     }
//     else if (marks >= 30 && marks < 70){
//         printf("The Student got B grade.\n");
//     }
//     else if (marks >= 70 && marks < 90){
//         printf("The Student got A grade.\n");
//     }
//     else 
//         printf("The Student got A+ grade.\n");
    
//     return 0;
// }




// Q3. WAP to find the character entered by the Used is Upper Case or Lower Case.

// #include<stdio.h>

// int main(){

//     char ch;
//     printf("Enter Character: ");
//     scanf("%c", &ch);

//     if (ch >= 'A' && ch <= 'Z'){
//         printf("Upper Case");
//     }
//     else if (ch >= 'a' && ch <= 'z'){
//         printf("Lower Case");
//     }
//     else 
//         printf("Not a English letter");

//     return 0;
// }



/// Q4. WAP to check if a given number is a Armstrong number or not.

// #include<stdio.h>
// #include<math.h>

// int main(){

//     int num;
//     printf("Enter the Number: ");
//     scanf("%d", &num);

//     if 
// }





// Q5. WAP to Check if the given number is a natural number.

#include<stdio.h>

int main(){

    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);

    if (num >= 1){
    printf("The number is a Natural Number.");
    }
    else {
        printf("Its not a Natural Number.");
    }
}