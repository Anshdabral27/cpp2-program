#include <iostream>
#include <string>
using namespace std;


template <typename T>
class Student {
private:
    string name;
    int age;
    T course;         
    T department;     

public:
  
    Student(string n, int a, T c, T d) : name(n), age(a), course(c), department(d) {}


    void display() const {
        cout << "Student Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Department: " << department << endl;
    }

  
    void setData(string n, int a, T c, T d) {
        name = n;
        age = a;
        course = c;
        department = d;
    }
};

int main() {
   
    Student<string> student1("Alice", 20, "Computer Science", "Engineering");
    

    cout << "Student 1 Information: " << endl;
    student1.display();

    Student<int> student2("Bob", 22, 101, 1001);
    
   
    cout << "\nStudent 2 Information: " << endl;
    student2.display();

    return 0;
}
