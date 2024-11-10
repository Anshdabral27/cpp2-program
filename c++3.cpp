#include <iostream>
#include <string>
using namespace std;

class Student;  


void displayStudentDetails(const Student& student);

class Student {
private:
    string name;
    int age;
    string department;
    string course;

public:
   
    Student(string n, int a, string d, string c) : name(n), age(a), department(d), course(c) {}

    
    string getName() const { return name; }
    int getAge() const { return age; }
    string getDepartment() const { return department; }
    string getCourse() const { return course; }

  
    friend void displayStudentDetails(const Student& student);
};


void displayStudentDetails(const Student& student) {
    cout << "Student Details:" << endl;
    cout << "Name: " << student.getName() << endl;
    cout << "Age: " << student.getAge() << endl;
    cout << "Department: " << student.getDepartment() << endl;
    cout << "Course: " << student.getCourse() << endl;
}

int main() {
   
    Student student1("John Doe", 20, "Computer Science", "Data Structures");

   
    displayStudentDetails(student1);

    return 0;
}
