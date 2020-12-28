#include <iostream>
#include <string>

#include "Roster.h"

using namespace std;

int i = 0;
int numStudents = 5;
const string studentData[5] = {
    "A1, John, Smith, John19889@gm ail.com, 20, 30, 35, 40, SECURITY",
    "A2, Suzan, Erickson, Erickson_1990@gmailcom, 19, 50, 30, 40, NETWORK",
    "A3, Jack, Napoli, The_lawyer99yahoo.com, 19, 20, 40, 33, SOFTWARE",
    "A4, Erin, Black, Erin.black@comcast.net, 22, 50, 58, 40, SECURITY",
    "A5, Richard, McKie, reginator86@gmail.com, 34, 40, 32, 64, SOFTWARE"
};

void Roster::PrintAll() {
    for (int i = 0; i < numStudents; ++i) 
    {
        cout << studentData[i] << " " << endl;
    }
}

/*void Roster::PrintInvalidEmails() {
    for (i = 0; i < numStudents; ++i) {
        string email = classRosterArray->emailAddress();
        if (email.find("@") == string::npos )
            cout << email << endl;
};*/

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int studentAge,
    int courseDay1, int courseDay2, int courseDay3, DegreeProgram degreeProgram) {    
    int DaysInCourse[3]{ 
        courseDay1, courseDay2, courseDay3 
    };
}

/*void PrintAverageDaysInCourse(); {
    if (this->classRosterArray[i]->getStudentID == studentID) {
        bool present = true;
        cout << "Average number of days left in class for student: " << studentID << "is ";
        cout << ((courseDay1 + courseDay2 + courseDay3) / 3) << endl;
    }
}*/
	
/*void PrintByDegreeProgram(DegreeProgram degreePgrogram) {
    cout << "Print by Degree: " << DegreeProgram[degreeProgram] << endl;
    for (int i = 0; i < numStudents; ++i) {
        if (this->classRosterArray[i]->getDegreeProgram == degreeProgram) this->classRosterArray[i]->print();
    }
}*/