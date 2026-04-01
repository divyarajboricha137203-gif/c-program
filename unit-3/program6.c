#include <stdio.h>

struct Student {
    char name[50];
    float grade;
    int joinYear;
};

void printStudentsByYear(struct Student students[], int size, int targetYear) {
    printf("Students who joined in %d:\n", targetYear);
    printf("Name\t\tGrade\tYear\n");
    printf("------------------------------\n");

    for (int i = 0; i < size; i++) {
        if (students[i].joinYear == targetYear) {
            // %.1f limits the grade to one decimal place
            printf("%s\t\t%.1f\t%d\n", students[i].name, students[i].grade, students[i].joinYear);
        }
    }
}

int main() {
    struct Student students[] = {
        {"Alice", 8.5, 2019},
        {"Bob", 4.2, 2020},
        {"Charlie", 5.1, 2019},
        {"Daisy", 5.0, 2018}
    };
    int size = sizeof(students) / sizeof(students[0]);

    printStudentsByYear(students, size, 2019);

    return 0;
}
