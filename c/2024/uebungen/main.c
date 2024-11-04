#include <stdio.h>

void calculateGrades() {
    int numberOfExams;
    printf("Geben Sie die Anzahl der Prüfungen ein: ");
    scanf("%d", &numberOfExams);

    float totalGrade = 0;
    float percentage;
    float grade;
    float maxPoints, points;

    for (int i = 1; i <= numberOfExams; i++) {
        printf("Prüfung %d: \n", i);
        printf("Geben Sie die erreichten Punkte ein: ");
        scanf("%f", &points);

        printf("Geben Sie die maximal möglichen Punkte ein: ");
        scanf("%f", &maxPoints);


        percentage = (points / maxPoints * 100);


        if (percentage >= 90) {
            grade = 6;
        } else if (percentage >= 65) {
            grade = 5;
        } else if (percentage >= 55) {
            grade = 4;
        } else if (percentage >= 40) {
            grade = 3;
        } else if (percentage >= 25) {
            grade = 2;
        } else {
            grade = 1;
        }

        printf("Erreicht: %.2f%%, Note: %.1f\n", percentage, grade);
        totalGrade += grade;
    }


    float averageGrade = totalGrade / numberOfExams;
    printf("Durchschnittsnote: %.2f\n", averageGrade);
}

int main() {
    calculateGrades();
    return 0;
}
