// #include<stdio.h>

// void printHello();

// int main(){

//     printHello();
//     printHello();
//     printHello();
//     return 0;
// }

// void printHello(){

//     printf("Hello!\n");
// }



// Q2. Write 2 Functions - one to print "Hello" & second to print "Good Bye".

// #include<stdio.h>

// void printHello();
// void printGoodbye();

// int main(){

//     printHello();
//     printGoodbye();
//     return 0;
// }

// void printHello(){

//     printf("Hello!\n");
// }

// void printGoodbye(){

//     printf("Good Bye!!!!\n");
// }



// Q3. Write a function that prints Namaste if User is Indian & Bonjour if the user is French.

// #include<stdio.h>

// void Namaste();
// void Bonjour();

// int main(){

//     char ch;
//     printf("Enter I for Indian or F for French: ");
//     scanf("%c", &ch);

//     if(ch=='I'){
//         Namaste();
//     }
//     else if (ch=='F'){
//         Bonjour();
//     }
//     else {
//         printf("Not Valid Nationality.");
//     }

//     return 0;

// }

// void Namaste(){

//     printf("Namaste.");
// }

// void Bonjour(){

//     printf("Bonjour.");
// }



// Q4. Print the table using Function.

// #include<stdio.h>

// void printTable(int n);

// int main(){

//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     printTable(n);

//     return 0;
// }


// void printTable(int n){

//     for (int i = 1; i < 11; i++){
//         printf("%d\n", n * i);
//     }
// }




// Q5. Write a Function to Calculate the area of square, circle & rectangle.

// #include<stdio.h>
// #include<math.h>

// void Area_of_Sqaure(int a);
// void Area_of_Circle(int b);
// void Area_of_Rectangle(int c, int d);


// int main(){


//     float a, b, c, d;
//     printf("Enter length of a Square: ");
//     scanf("%f", &a);
//     Area_of_Sqaure(a);


//     printf("Enter radius of the Circle: ");
//     scanf("%f", &b);
//     Area_of_Circle(b);

    
//     printf("Enter length of the Rectangle: ");
//     scanf("%f", &c);
//     printf("Enter width of the Rectangle: ");
//     scanf("%f", &d);
//     Area_of_Rectangle(c, d);



//     return 0;

// }


// void Area_of_Sqaure(int a){
//     printf("The Area of Square is: %f\n", pow(a, 2));
// }

// void Area_of_Circle(int b){
//     printf("The Area of Circle is: %f\n", 3.14 * pow(b, 2));
// }

// void Area_of_Rectangle(int c, int d){
//     printf("The Area of Rectangle is: %d\n", c * d);
// }





// Q6. Sum of first n natural numbers.

// #include<stdio.h>

// int sum(int n);

// int main(){

//     printf("The Sum is %d: ", sum(5));
//     return 0;
// }
// // recursive function
// int sum(int n){

//     if (n == 1) {
//         return 1;
//     }

//     int sumNm1 = sum(n-1);
//     int sumN = sumNm1 + n;

//     return sumN;
// }




// Q7. Write a Function to convert celsius to fahrenheit.

// #include<stdio.h>

// float CeltoFar(float x);

// int main(){

//     float far = CeltoFar(37);
//     printf("%f", far);
//     return 0;

// }

// float CeltoFar(float x){

//     float far = x * (9.0/5.0) + 32;

//     return far;
// }




// Q8. Write a Function to calculate Percentage of a student from Marks in Science, Math & German.

// #include<stdio.h>

// float percent_cal(float Science, float Maths, float German);

// int main(){

//     float Science, Maths, German;

//     printf("Enter the Marks of Science: ");
//     scanf("%f", &Science);

//     printf("Enter the Marks of MAths: ");
//     scanf("%f", &Maths);

//     printf("Enter the Marks of German: ");
//     scanf("%f", &German);

//     percent_cal(Science, Maths, German);

//     return 0;
// }

// float percent_cal(float Science, float Maths, float German){

//     float total_marks_obtained, total, total_possible_marks = 300;
//     total_marks_obtained = Science + Maths + German;

//     total = (total_marks_obtained / total_possible_marks) * 100;

//     printf("The Student has Scored %f", total);

// }




// Q9. Write a recursion function to print the nth of the fibonacci sequence.

// #include<stdio.h>

// int fib(int n);

// int main(){


//     printf("%d", fib(10));

//     return 0;
// }

// int fib(int n){
//     if(n == 0){
//         return 0;
//     }
//     if(n == 1){
//         return 1;
//     }


//     int fibNm1 = fib(n -1);
//     int fibNm2 = fib(n -2);
//     int fibN = fibNm1 + fibNm2;

//     return fibN;
// }




// Q10. Write a For loop function to print the nth of the fibonacci sequence.

#include<stdio.h>

int fib(int n);

int main(){


    printf("%d", fib(10));
    
    return 0;
}

int fib(int n){

    int a = 0, b = 1, next;

    if (n == 0){
        return 0;
    }

    if (n == 1){
        return 1;
    }


    for(int i = 2; i<=n; i++){

        next = a + b;
        a = b;
        b = next;


    }

    return b;
}