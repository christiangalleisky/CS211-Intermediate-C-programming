#ifndef StudentProfile_C
#define StudentProfile_C

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

#include "StudentProfile.h"

void StudentProfile::setStudentProfile(Person P, Student S) {
	PersonalInfo = P;
	StdInfo = S;
}
void StudentProfile::PrintOutStudentProfile() {
	PersonalInfo.PrintOutPerson();
	StdInfo.PrintOutStudent();
}

#endif
