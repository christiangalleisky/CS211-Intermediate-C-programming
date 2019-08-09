#ifndef Student_C
#define Student_C

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

#include "Student.h"

void Student::setStudent(long StNo, Course C1, Course C2, Course C3, Course C4, Course C5) {
	this->StNo = StNo;
	Course1 = C1;
	Course2 = C2;
	Course3 = C3;
	Course4 = C4;
	Course5 = C5;
}

void Student::PrintOutStudent() {
	cout << "The student's id number is : " << StNo << endl;
	Course1.PrintOutCourse();
	Course2.PrintOutCourse();
	Course3.PrintOutCourse();
	Course4.PrintOutCourse();
	Course5.PrintOutCourse();
}

#endif
