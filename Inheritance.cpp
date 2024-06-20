#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;

public:
    void setName( string newName) {
        name = newName;
    }

    string getName() {
        return name;
    }
};

class Athlete {
public:
    string sport;

    void setSport( string newSport) {
        sport = newSport;
    }

    string getSport()  {
        return sport;
    }
};

class Student : public Person, public Athlete {
public:
    int studentID;

    void setStudentID(int newID) {
        studentID = newID;
    }

    int getStudentID() const {
        return studentID;
    }
};
int main() {
    Student student;

    student.setName("John Doe");
    cout << "Name: " << student.getName() << endl;

    
    student.setStudentID(12345);
    cout << "Student ID: " << student.getStudentID() << endl;

    student.setSport("Basketball");
    cout << "Sport: " << student.getSport() << endl;

    return 0;
}
