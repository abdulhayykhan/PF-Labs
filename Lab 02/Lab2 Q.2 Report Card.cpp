#include <iostream>

using namespace std;

int main() {
    // Variables to store user input for obtained marks
    float digitalLogicMarks, electronicsMarks, englishMarks;

    // Getting user input for obtained marks
    cout << "Enter obtained marks for Digital Logic Design: ";
    cin >> digitalLogicMarks;
    cout << "Enter obtained marks for Electronics-I: ";
    cin >> electronicsMarks;
    cout << "Enter obtained marks for English: ";
    cin >> englishMarks;

    // Total marks
    const float totalMarksPerSubject = 100.0;
    const int totalSubjects = 3;
    float totalMarks = totalSubjects * totalMarksPerSubject;

    // Calculating obtained marks and percentage
    float obtainedMarks = digitalLogicMarks + electronicsMarks + englishMarks;
    float percentage = (obtainedMarks / totalMarks) * 100;

    // Printing the result card using escape sequences
    cout << "\n\t\t\tResult Card" << endl;
    cout << "Name: Abdul Hayy Khan \t\t\t\tReg. #: CIIT/8971870" << endl;
    cout << "Session: Fall-24\t\t\tSemester: 1" << endl;
    cout << "Subjects \t\tTotal Marks\tObtained Marks" << endl;
    cout << "Digital Logic Design \t" << totalMarksPerSubject << "\t\t\t" << digitalLogicMarks << endl;
    cout << "Electronics-I \t\t" << totalMarksPerSubject << "\t\t\t" << electronicsMarks << endl;
    cout << "English \t\t" << totalMarksPerSubject << "\t\t\t" << englishMarks << endl;

    // Displaying the percentage
    cout << "\nPercentage= " << percentage << " %" << endl;

    return 0;
}
