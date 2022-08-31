#include <iostream>

using namespace std;

struct Student { //Student struct.
    string first;
    string last;
    char courseGrade;
};
int main()
{
    string first, last;
    char courseGrade;
    Student* p = new Student; //Creates new student and assigns it to pointer p.

    cout << "What is your first name?\n";
    cin >> first;
    cout << "What is your last name?\n";
    cin >> last;
    cout << "What is your course grade?\n";
    cin >> courseGrade;

    //Setting struct values.
    p->first = first;
    p->last = last;
    p->courseGrade = courseGrade;

    //Printing out their information
    cout << "\nYour name: " << p->first << " " << p->last << endl << "Your grade: " << p->courseGrade << endl;
}

