/******************************************************************************
1 — Gradebook Reporter
Create a program that reads student names and their test scores from a file and prints a
grade report.
Tasks:
1. Read the student’s full name using getline.
2. Then read their test scores until you find a -1 (sentinel).
3. Calculate the average of the scores using type casting if needed.
4. Use a switch statement to decide the letter grade (A, B, C, D, or F).
5. Use the ?: operator to show PASS if average >= 60, otherwise FAIL.
6. Format the output as a table using setw.
7. Ask the user (with cin.get) if they want to save the table to a file.
8. (Optional) Let the user search for a student by name and show only that record.

*******************************************************************************/

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;

    int main() {
    
    string studentName;
    double testScore; 
    int num_of_tests;
    double totalScore = 0;
    int avgScore;
    num_of_tests = 0; 
    string status;
    
    char letterGrade;
        
    cout << "Please enter your full name: " << endl; 
    getline(cin,studentName);
    cout << "Please enter your test scores or enter -1 to see grade report: " << endl;
    cin >> testScore;
    while (testScore != -1 ) {
        num_of_tests += 1;
        totalScore += testScore;
        cin >> testScore;
    }
    avgScore = totalScore / num_of_tests;
        
    switch(avgScore / 10) {
        case 10:
        case 9: 
            letterGrade = 'A'    ; break;
            
        case 8: letterGrade = 'B'; break;
        
        case 7: letterGrade = 'C'; break;
        
        case 6: letterGrade = 'D'; break;
        
        default:letterGrade = 'F'; break;
    }
    status = (avgScore >= 60)? "PASS" : "FAIL";
    cout << "Name " << fixed << setw(20) 
        << " Average Score" << fixed << setw(20) 
        << " Letter Grade" << fixed << setw(20)
        << "PASS/FAIL" << endl;
        
    cout << studentName << fixed << setw(20)
        << avgScore << fixed << setw(20) 
        << letterGrade  << fixed << setw(20) 
        << status << endl;
        
    return 0;
}
        
        
        
        
            
            
        
        

        

       
    
