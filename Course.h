
#ifndef Course_H
#define Course_H

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

class Course {
private:
	long CourseNum;
	string CourseName;
public:
	void PrintOutCourse();
	void setCourse(long CourseNum, string CourseName);
};

#endif

