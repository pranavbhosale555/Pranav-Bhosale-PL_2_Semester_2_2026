#include <iostream>
using namespace std;

class Marks
{
private:
    int rollNo;
    string name, division;
    float marks[10];
    float total;
    float percentage;
    int n;

public:
    void getData()
    {
        total = 0;

        
        cout << "Enter roll number: ";
        cin >> rollNo;

        cin.ignore();

        
        cout << "Enter your name: ";
        getline(cin, name);

        
        cout << "Enter your division: ";
        getline(cin, division);

        
        cout << "Enter number of subjects: ";
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cout << "Enter marks of subject " << i + 1 << ": ";
            cin >> marks[i];
            total += marks[i];
        }

        
        percentage = (total / (n * 100)) * 100;
    }

    void display()
    {
        cout << "\n----- STUDENT RESULT -----\n";
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
        cout << "Division    : " << division << endl;
        cout << "Total Marks : " << total << endl;
        cout << "Percentage  : " << percentage << "%" << endl;
        cout << "--------------------------\n";
    }
};

int main()
{
    int students;

    cout << "Enter number of students: ";
    cin >> students;

    Marks m[10];   

    for (int i = 0; i < students; i++)
    {
        cout << "\nEnter details of student " << i + 1 << endl;
        m[i].getData();
    }
    for (int i = 0; i < students; i++) {
        m[i].display();
}
return 0;
}