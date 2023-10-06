#include <stdio.h>

#define MAX_STUDENTS 10


int main() {
    struct Student {
        int no;
    char name[50];
    int assignment1;
    int assignment2;
    int assignment3;
    float averageScore;
};

    struct Student students[MAX_STUDENTS] = {  {1, "Namakula Resty", 78, 80, 66},
        {2, "muynja tella", 85, 90, 75},
        {3, "sebsndeke tim", 70, 85, 90},
        {4, "lwanyga fred", 88, 92, 79},
        {5, "dilisa medy", 92, 88, 94},
        {6, "edson lwanga", 81, 79, 85},
        {7, "ibra ssenyo",72,78,99},
        {8,"seba tendo",88,90,98},
        {9, "fahad hamza",99,78,89},
        {10,"dany nara",88,98,76}
        
    };
      

    int numStudents = sizeof(students) / sizeof(students[0]);

    for (int i = 0; i < numStudents; i++) {
        struct Student *student = &students[i];
        float averageScore = (student->assignment1 + student->assignment2 + student->assignment3) / 3.0;
        student->averageScore = averageScore;
    }

    
    printf("No\tName\t\tAssignment 1\tAssignment 2\tAssignment 3\tAverage Score\n");
    printf("...........................................................................\n");
    for (int i = 0; i < numStudents; i++) {
        struct Student *student = &students[i];
        printf("%d\t%s\t%d\t\t%d\t\t%d\t\t%.2f\n", student->no, student->name, student->assignment1,
               student->assignment2, student->assignment3, student->averageScore);
    }

    return 0;
}