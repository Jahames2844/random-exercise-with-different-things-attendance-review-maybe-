#include <iostream>
using namespace std;

int main() 
{
    int totalClasses;
    int attendedClasses;
    int AverageGrade;
    bool FeePaid;

    cout << "Total Classes: ";
    if (!(cin >> totalClasses)) {
        cout << "Invalid Input";
        return 1;
    }
    cout << "Total Attended Classes: ";
    if (!(cin >> attendedClasses)) {
        cout << "Invalid Input";
        return 1;
    }
    cout << "Input Average Grade:(0-100) ";
    if (!(cin >> AverageGrade)) {
        cout << "invalid input";
        return 1;
    }
    cout << "Is fee paid? (1 for yes 0 for no):";
    if (!(cin >> FeePaid)) {
        cout << "invalid input.";
        return 1;
    }

    double AttendancePercentage = ((double)attendedClasses / (double)totalClasses) * 100;
    if (AverageGrade >= 80) {
        AverageGrade +=5;
    }
    double BonusGrade = AverageGrade;
    

    cout << "Total Number of classes: " << totalClasses << ".\n";
    cout << "Number Of classes Attended: " << attendedClasses << ".\n";
    cout << "Average grade: " << AverageGrade << ".\n";
    cout << "Is exam fee paid? " << (FeePaid ? true : false) << ".\n";
    cout << "Attendance: " << AttendancePercentage << ".\n";
    cout << "Final grade (with bonus): " << BonusGrade << ".\n";
    cout << "Exam eligibility: " << (AttendancePercentage >= 70 && AverageGrade >= 50 && FeePaid ? true : false) << ".\n";
    
}
