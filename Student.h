#ifndef Student_H
#define Student_H

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

#include "Course.h"

class Student {
private:
	long StNo;
	Course Course1;
	Course Course2;
	Course Course3;
	Course Course4;
	Course Course5;
public:
	void PrintOutStudent();
	void setStudent(long StNo, Course C1, Course C2, Course C3, Course C4, Course C5);
};

#endif


