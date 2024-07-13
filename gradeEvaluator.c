#include <stdio.h>

// Write a program that takes as input the total marks obtained by a student in a course and displays the corresponding letter grade according to the following table. 
// Marks	Letter Grade
// 80-100	A
// 70-79	B
// 60-69	C
// 50-59	D
// 0-49	F

int main(){
    // defining variables
    int totalMarks;
    char letterGrade;

    //keep asking the user for total marks till they give a valid value
    while(1){
        // ask the user to enter student's total marks
        printf("Enter total marks obtained by the student (0 - 100): ");

        // read the inputted student's total marks
        if(scanf("%d", &totalMarks) != 1) {
            // clear the the input buffer to avoid invalid input
            while(getchar() != '\n');

            // display an error message to the user
            printf("Invalid total marks. Try values between 0 and 100.\n");
            continue;
        }

        // validate the total marks supplied
        if(totalMarks >= 0 && totalMarks <= 100){
            // exiting the outter while loop because the total marks supplied is valid
            break;
        } else {
             // display an error message to the user
            printf("Invalid total marks. Try values between 0 and 100.\n");
        }
    }

    // evaluate the letter grade based on the total marks
    if(totalMarks >= 80){
        letterGrade = 'A';
    } else if(totalMarks >= 70) {
        letterGrade = 'B';
    } else if(totalMarks >= 60) {
        letterGrade = 'C';
    } else if(totalMarks >= 50) {
        letterGrade = 'D';
    } else {
        letterGrade = 'F';
    } 

    // display the letter grade
    printf("The corresponding letter grade is: %c\n", letterGrade);

    // exit the program
    return 0;
}