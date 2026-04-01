#include <stdio.h>

struct Student {
    char name[50];
    float grade;
};

void printHighGrades(struct Student students[], int size) {
    printf("Students with grades > 5.0:\n");
    for (int i = 0; i < size; i++) {
        if (students[i].grade > 5.0) {
            printf("%s\n", students[i].name);
        }
    }
}

int main() {
    struct Student students[] = {
        {"Alice", 8.5},
        {"Bob", 4.2},
        {"Charlie", 5.1},
        {"Daisy", 5.0}
    };
    int size = sizeof(students) / sizeof(students[0]);

    printHighGrades(students, size);

    return 0;
}

