// Write a C program to input marks for five subjects: Physics, Chemistry, Biology, Mathematics, and Computer Science.
// Calculate the percentage and assign a grade according to the following criteria:

// -> Percentage >= 90%: Grade A
// -> Percentage >= 80%: Grade B
// -> Percentage >= 70%: Grade C
// -> Percentage >= 60%: Grade D
// -> Percentage >= 40%: Grade E
// -> Percentage < 40%: Grade F

// Sample input :-
// ---------------
// Enter marks for Physics: 85
// Enter marks for Chemistry: 78
// Enter marks for Biology: 92
// Enter marks for Mathematics: 88
// Enter marks for Computer Science: 95

// Sample output :-
// -----------------

// Total Marks = 438.00/500
// Percentage = 87.60%
// Grade = B

#include<stdio.h>
int main()
{
    int physics, chemistry, biology, math, comp_sci;
    float total_marks, percentage;
    
    printf("Enter marks for 5 subject: ");
    scanf("%d %d %d %d %d", &physics,&chemistry,&biology,&math,&comp_sci);
   
    total_marks = (physics + chemistry + biology + math + comp_sci);
    percentage = (total_marks / 500) * 100;

    printf("\nTotal Marks: %.2f\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);

    
    if (percentage >= 90) {
        printf("Grade: A\n");
    } else if (percentage >= 80&&percentage<=90) {
        printf("Grade: B\n");
    } else if (percentage >= 70&&percentage<=80) {
        printf("Grade: C\n");
    } else if (percentage >= 60&&percentage<=70) {
        printf("Grade: D\n");
    } else if (percentage >= 40&&percentage<=60) {
        printf("Grade: E\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}