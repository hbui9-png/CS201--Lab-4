#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <random>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {
    char userChoice;
    int addResult;
    int userAnswer;
    int correctAnswer = 0;
    int wrongAnswer = 0; 
    random_device myEngine;
    uniform_int_distribution<int> randomInt(0,100);

    cout << "Please enter your choices: " << endl;
    cout << "1) Addition" << endl; 
    cout << "2) Subtraction" << endl;
    cout << "3) Multiplication" << endl;
    cout << "4) Division" << endl;
    cout << "5) Statistics (summary of performance)" << endl;
    cout << "Q) Quit" << endl;
    cin >> userChoice;

    while (userChoice != 'Q' && userChoice != 'q') {

        switch (userChoice) {
            case '1':   // Addition
                while (true) {
                    int num1 = randomInt(myEngine);
                    int num2 = randomInt(myEngine);
                    cout << "What is " << num1 << " + " << num2 << " ?" << endl;
                    cin >> userAnswer;
                    if (userAnswer == -999) break;
                    addResult = num1 + num2;
                    if (userAnswer == addResult) {
                        cout << "Correct!" << endl;
                        correctAnswer++;
                    } else {
                        cout << "Wrong!" << endl;
                        wrongAnswer++;
                    }
                }
                break;

            case '2':   // Subtraction
                while (true) {
                    int num1 = randomInt(myEngine);
                    int num2 = randomInt(myEngine);
                    cout << "What is " << num1 << " - " << num2 << " ?" << endl;
                    cin >> userAnswer;
                    if (userAnswer == -999) break;
                    addResult = num1 - num2;
                    if (userAnswer == addResult) {
                        cout << "Correct!" << endl;
                        correctAnswer++;
                    } else {
                        cout << "Wrong!" << endl;
                        wrongAnswer++;
                    }
                }
                break;

            case '3':   // Multiplication
                while (true) {
                    int num1 = randomInt(myEngine);
                    int num2 = randomInt(myEngine);
                    cout << "What is " << num1 <<" * "<< num2 << " ?" << endl;
                    cin >> userAnswer;
                    if (userAnswer == -999) break;
                    addResult = num1 * num2;
                    if (userAnswer == addResult) {
                        cout << "Correct!" << endl;
                        correctAnswer++;
                    } else {
                        cout << "Wrong!" << endl;
                        wrongAnswer++;
                    }
                }
                break;

            case '4':   // Division
                while (true) {
                    int num1 = randomInt(myEngine);
                    int num2 = randomInt(myEngine);
                    if (num2 == 0) num2 = 1;
                    cout << "What is " << num1 << " / " << num2 << " ?" << endl;
                    cin >> userAnswer;
                    if (userAnswer == -999) break;
                    addResult = num1 / num2;
                    if (userAnswer == addResult) {
                        cout << "Correct!" << endl;
                        correctAnswer++;
                    } else {
                        cout << "Wrong!" << endl;
                        wrongAnswer++;
                    }
                }
                break;

            case '5':   // Statistics
                cout << setw(15) << "Correct" << setw(15) << "Wrong" << endl;
                cout << setw(15) << correctAnswer << setw(15) << wrongAnswer << endl;

                // Save results to file
                {
                    ofstream outFile("results.txt", ios::app);
                    outFile << "Correct: " << correctAnswer 
                            << "  Wrong: " << wrongAnswer << endl;
                    outFile.close();
                }
                break;

            default:   // Invalid input
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

    // show menu again
    cout << "Please enter your choices: " << endl;
    cout << "1) Addition" << endl; 
    cout << "2) Subtraction" << endl;
    cout << "3) Multiplication" << endl;
    cout << "4) Division" << endl;
    cout << "5) Statistics (summary of performance)" << endl;
    cout << "Q) Quit" << endl;
    cin >> userChoice;
    }

    cout << "Goodbye!" << endl;
    return 0;
}
