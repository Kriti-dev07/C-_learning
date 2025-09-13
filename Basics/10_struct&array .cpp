#include <iostream>
using namespace std;
     
struct Student {
    int roll;
    float marks;
};

int main() {
    int n, topperIndex = 0;

    cout << "Enter number of students: ";
    cin >> n;

    Student s[n]; // Array of structures

    // Input
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i + 1 << endl;

        cout << "Roll Number: ";
        cin >> s[i].roll;

        cout << "Marks: ";
        cin >> s[i].marks;

        // Check for topper while entering
        if (s[i].marks > s[topperIndex].marks) {
            topperIndex = i;
        }
    }

    // Output
    cout << "\n--- Student Records ---" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Roll: " << s[i].roll << " | Marks: " << s[i].marks << endl;
    }

    // Topper
    cout << "\nTopper -> Roll: " << s[topperIndex].roll
         << " | Marks: " << s[topperIndex].marks << endl;

    return 0;
}
