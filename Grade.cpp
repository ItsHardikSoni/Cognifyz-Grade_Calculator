#include <iostream>
using namespace std;

int main() {
    int numSubjects;
    float sum = 0, grade, average;

    // Prompt the user to enter the number of subjects
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    // Loop to input grades for each subject
    for (int i = 1; i <= numSubjects; i++) {
        cout << "Enter grade for subject " << i << ": ";
        cin >> grade;
        sum += grade;  // Add the grade to the total sum
    }

    // Calculate the average grade
    average = sum / numSubjects;

    // Display the average grade
    cout << "Average Grade: " << average << endl;

    return 0;
}
