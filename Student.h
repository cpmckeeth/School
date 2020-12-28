#pragma once
#ifndef Student_h
#define Student_h
#include <string>
using namespace std;
class Student {
public:
    Student(); //default constructor
    //setters/mutators
    void SetStudentIdentification(int studentIdentification);
    void SetStudentFirstName(string studentFirstName);
    void SetStudentLastName(string studentLastName);
    void SetStudentEmailAddress(string studentEmailAddress);
    void SetStudentAgeInYears(int studentAgeInYears);
    void SetStudentDaysCourseOne(int studentDaysCourseOne);
    void SetStudentDaysCourseTwo(int studentDaysCourseTwo);
    void SetStudentDaysCourseThree(int studentDaysCourseThree);
    void SetStudentDegreeProgram(string studentDegreeProgram);
    void print();
    //Getters/accessors
    int GetStudentIdentification();
    string GetStudentFirstName();
    string GetStudentLastName();
    string GetStudentEmailAddress();
    int GetStudentAgeInYears();
    int GetStudentDaysCourseOne();
    int GetStudentDaysCourseTwo();
    int GetStudentDaysCourseThree();
    string GetStudentDegreeProgram();
private:
    int studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int studentAge;
    int daysCourse1;
    int daysCourse2;
    int daysCourse3;
    string degreeProgram;
    ~Student(); //destructor
};
#endif  Student_h