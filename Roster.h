#pragma once
#include <iostream>
#include <string>
#include "Student.h"
#include "Degree.h"
class Roster {
public:
	Student* classRosterArray;
	int Student = 5;
	//void Parse();
	Roster();
	void add(
		string studentID,
		string firstName,
		string lastName,
		string emailAddress,
		int studentAge,
		int daysCourse1,
		int daysCourse2,
		int daysCourse3,
		DegreeProgram degreeProgram
	);
	bool remove(string studentID);
	void PrintAll();
	void PrintInvalidEmails();
	void PrintAverageDaysInCourse();
	void PrintByDegreeProgram();
	~Roster();
};