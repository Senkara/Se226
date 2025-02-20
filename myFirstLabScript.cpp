
#include <iostream>
using namespace std;

int main() {
    string name, student_id;
    cout << "What is your name? ";
    cin >> name;
    cout << "Hello " << name << "." << endl;

    cout << "What is your Student id? ";
    cin >> student_id;
    cout << "Your ID is " << student_id << "." << endl;


    double var1, var2;
    cout << "Enter the first number: ";
    cin >> var1;
    cout << "Enter the second number: ";
    cin >> var2;

    cout << "sum: " << var1 + var2 << endl;
    cout << "diff: " << var1 - var2 << endl;
    cout << "prod: " << var1 * var2 << endl;


    cout << "Enter the student's name: ";
    cin >> name;

    double lab_grade, midterm_grade, final_grade;
    cout << "Enter the lab grade: ";
    cin >> lab_grade;
    cout << "Enter the midterm grade: ";
    cin >> midterm_grade;
    cout << "Enter the final grade: ";
    cin >> final_grade;

    double last_score = (lab_grade * 0.25) + (midterm_grade * 0.35) + (final_grade * 0.40);

    cout << "Name: " << name << endl;
    cout << "Lab: " << lab_grade << endl;
    cout << "Midterm: " << midterm_grade << endl;
    cout << "Final: " << final_grade << endl;
    cout << "Last Score: " << last_score << endl;


    cout << "*" << endl;
    cout << "**" << endl;
    cout << "***" << endl;
    cout << "**" << endl;
    cout << "*" << endl;

    return 0;
}
