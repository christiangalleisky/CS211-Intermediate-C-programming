#ifndef Course_C
#define Course_C

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

#include "Course.h";

void Course::setCourse(long CourseNum, string CourseName){
	this->CourseNum = CourseNum;
	this->CourseName = CourseName;
	}

void Course::PrintOutCourse() {
		cout << "Course name is : " << CourseName << endl;
		cout << "Course number is : " << CourseNum << endl;
}

#endif
