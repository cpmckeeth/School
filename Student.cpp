#include <iostream>
#include <string>

#include "Student.h"

using namespace std;

Student::Student() {  //empty constructor
    this->studentID = 0;
    this->firstName = "";
    this->lastName = "";
    this->emailAddress = "";
    this->studentAge = 0;
    this->daysCourse1 = 0;
    this->daysCourse2 = 0;
    this->daysCourse3 = 0;
    this->degreeProgram = "";
}
void Student::SetStudentIdentification(int studentIdentification) {
   studentID = studentIdentification;
   return;
}
void Student::SetStudentFirstName(string studentFirstName) {
    firstName = studentFirstName;
    return;
}
void Student::SetStudentLastName(string studentLastName) {
    lastName = studentLastName;
    return;
}
void Student::SetStudentEmailAddress(string studentEmailAddress) {
    emailAddress = studentEmailAddress;
    return;
}
void Student::SetStudentAgeInYears(int studentAgeInYears) {
    studentAge = studentAgeInYears;
    return;
}
void Student::SetStudentDaysCourseOne(int studentDaysCourseOne) {
    daysCourse1 = studentDaysCourseOne;
    return;
}
void Student::SetStudentDaysCourseTwo(int studentDaysCourseTwo) {
    daysCourse2 = studentDaysCourseTwo;
    return;
}
void Student::SetStudentDaysCourseThree(int studentDaysCourseThree) {
    daysCourse3 = studentDaysCourseThree;
    return;
}
void Student::SetStudentDegreeProgram(string studentDegreeProgram) {
    degreeProgram = studentDegreeProgram;
    return;
}
void Student::print() {
    cout << studentID << firstName << lastName << emailAddress << endl;
}
int Student::GetStudentIdentification()  {
    return studentID;
}
string Student::GetStudentFirstName()  {
    return firstName;
}
string Student::GetStudentLastName()  {
    return lastName;
}
string Student::GetStudentEmailAddress()  {
    return emailAddress;
}
int Student::GetStudentAgeInYears() {
    return studentAge;
}
int Student::GetStudentDaysCourseOne() {
    return daysCourse1;
}
int Student::GetStudentDaysCourseTwo() {
    return daysCourse2;
}
int Student::GetStudentDaysCourseThree() {
    return daysCourse3;
}
string Student::GetStudentDegreeProgram() {
    return degreeProgram;
}
Student::~Student() { //destructor
}