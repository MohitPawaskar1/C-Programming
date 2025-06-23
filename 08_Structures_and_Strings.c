// Q1. Create a String firstName & lastName to store details of user & print all the characters using a loop.

// #include<stdio.h>


// void printString(char arr[]);

// int main(){

//     char firstName[] = "Mohit";
//     char lastName[] = "Pawaskar";

//     printString(firstName);
//     printString(lastName);
//     return 0;
// }

// void printString(char arr[]){
//     for (int i = 0; arr[i] != '\0'; i++){
//         printf("%c\t", arr[i]);
//     }
//     printf("\n");
// }



// strlen

// #include<stdio.h>
// #include<string.h>

// int main(){

//     char name[] = "Mohit";
//     printf("Length is: %d", strlen(name));
//     return 0;
// }




// strcpy (newstr, oldstr)

// #include<stdio.h>
// #include<string.h>

// int main(){

//     char oldStr[] = "Mohit";
//     char newStr[] = "Pawaskar";
//     strcpy(oldStr, newStr);
//     puts(newStr);
//     return 0;
// }





// strcat (firStr, secStr)

// #include<stdio.h>
// #include<string.h>

// int main(){

//     char firStr[] = "Mohit ";
//     char secStr[] = "Pawaskar";
//     strcat(firStr, secStr);
//     puts(firStr);
//     return 0;
// }





// strcmp(firStr, secStr)

// #include<stdio.h>
// #include<string.h>

// int main(){

//     char firStr[] = "Apple";
//     char secStr[] = "Banana";
//     printf("%d\n", strcmp(firStr, secStr));
    
//     char thiStr[] = "Banana";
//     char forStr[] = "Apple";
//     printf("%d\n", strcmp(thiStr, forStr));
    
//     char fivStr[] = "Banana";
//     char sixStr[] = "Banana";
//     printf("%d\n", strcmp(fivStr, sixStr));

//     return 0;
// }





// Q2. Take a string input from the user using %c.

// #include<stdio.h>
// #include<string.h>

// int main(){

//     char str[100];
//     char ch;
//     int i = 0;

//     while(ch != '\n'){
//         scanf("%c", &ch);
//         str[i]=ch;
//         i++;
//     }
//     str[i] = '\0';
//     puts(str);
//     return 0;
// }





// Q3. Find the salted form of a password entered by user is the salt is "123" & added at the end.

// #include<stdio.h>
// #include<string.h>

// int main(){

//     char password[50];
//     printf("Enter the Password: ");
//     scanf("%s", &password);

//     char salt[] = "123";

//     strcat(password, salt);
//     printf("The New Salted Password is: %s", password);

//     return 0;
// }





// Q4. Write a function named slice, which takes a string & returns a sliced string from index n to m.

// #include<stdio.h>
// #include<string.h>

// void slice(char str[], int n, int m);
// int main(){
    
//     char str[100] = "Mohit Pawaskar";
//     // printf("Enter the String: ");
//     // scanf("%s", &str);
//     // printf("%s", str);
    
//     slice(str, 1, 8);
    
//     return 0;
// }

// void slice(char str[], int n, int m){

//     for (int i = n; i < m; i++){
//         printf("%c", str[i]);
//     }
//     printf("\n");
// }





// Q5. Write a function to count the occurance of vowels in a string.


// Q4. Write a function named slice, which takes a string & returns a sliced string from index n to m.

// #include<stdio.h>
// #include<string.h>

// int countVowels(char str[]);

// int main(){
    
//     char str[100] = "Mohit Pawaskar";
//     printf("%d", countVowels(str));

//     return 0;
// }

// int countVowels(char str[]){

//     int count = 0;
//     for (int i = 0; str[i] != '\0'; i++){
//         if ( str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
//             count++;
//         }
//     }
//     return count;
    
// }





// Q5. Check if a given character is present in a string or not.
#include <stdio.h>
#include <string.h>

void checkChar(char str[], char ch);

int main() {
    char str[100] = "Mohit Pawaskar";
    char ch = 'a';
    checkChar(str, ch);

    return 0;
}

void checkChar(char str[], char ch) {
    int found = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Yes, the character '%c' is present in the string.\n", ch);
    } else {
        printf("No, the character '%c' is not present in the string.\n", ch);
    }
}
