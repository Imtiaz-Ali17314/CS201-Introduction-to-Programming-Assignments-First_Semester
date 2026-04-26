// Assignment No.  1

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    string name = "Imtiaz Ali";
    int id = 260200954;

    cout << "Name: " << name << endl;
    cout << "Student ID: BS" << id << endl;

    int d1 = (id / 100000000) % 10;
    int d2 = (id / 1000000) % 10;
    int d3 = (id / 10000) % 10;
    int d4 = (id / 100) % 10;
    int d5 = id % 10;

    cout << "\nExtracted Digits: ";
    cout << d1 << " " << d2 << " " << d3 << " " << d4 << " " << d5 << endl;

    int cleared = 0, warning = 0, detained = 0;

    int digits[5] = {d1, d2, d3, d4, d5};
    string courses[5] = {"Mathematics", "Physics", "English", "Programming", "Islamic Stud."};

    cout << "\n---------------- Attendance Report ----------------\n";
    cout << left << setw(18) << "Course"
         << setw(10) << "Attended"
         << setw(8) << "Total"
         << setw(12) << "Percentage"
         << setw(10) << "Standing" << endl;

    for (int i = 0; i < 5; i++)
    {
        int percentage = digits[i] * 10;
        string status;

        if (percentage >= 75)
        {
            status = "CLEARED";
            cleared++;
        }
        else if (percentage >= 50)
        {
            status = "WARNING";
            warning++;
        }
        else
        {
            status = "DETAINED";
            detained++;
        }

        cout << left << setw(18) << courses[i]
             << setw(10) << digits[i]
             << setw(8) << 10
             << setw(12) << (to_string(percentage) + "%")
             << setw(10) << status << endl;
    }

    cout << "\n---------------- Summary ----------------\n";
    cout << "CLEARED: " << cleared << endl;
    cout << "WARNING: " << warning << endl;
    cout << "DETAINED: " << detained << endl;

    return 0;
}