#include <iostream>
#include <string>
using namespace std;

struct Student {
    string firstName;
    string lastName;
    string dateOfBirth;
    int englishGrade;
    int mathGrade;
    int scienceGrade;
    int itGrade;
};

int main() {
    // Create an array of students with their grades
    Student students[] = {
            {"Ram", "Kumar", "01/01/2002", 80, 90, 85, 95},
            {"Ravi", "Singh", "02/03/2003", 75, 85, 70, 90},
            {"Krishna", "Patel", "05/05/2002", 90, 95, 92, 85},
            {"Lakshmi", "Narayanan", "12/07/2001", 80, 90, 85, 80},
            {"Praba", "Sethi", "21/10/2003", 70, 80, 75, 80}
    };
    // calculate the average student percentage
    // Calculate the average grade for each student
    int numStudents = sizeof(students) / sizeof(students[0]);
    for (int i = 0; i < numStudents; i++) {
        Student student = students[i];
        int sum = student.englishGrade + student.mathGrade + student.scienceGrade + student.itGrade;
        double average = sum / 4.0;
        cout << student.firstName << " " << student.lastName << "'s average grade is " << average << endl;
    }

    return 0;
}


