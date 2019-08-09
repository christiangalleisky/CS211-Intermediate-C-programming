#ifndef StudentProfile_H
#define StudentProfile_H

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

#include "Person.h"
#include "Student.h"

class StudentProfile {
private:
	Person PersonalInfo;
	Student StdInfo;
public:
	void PrintOutStudentProfile();
	void setStudentProfile(Person P, Student S);
};

#endif
