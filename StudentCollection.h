#ifndef StudentCollection_H
#define StudentCollection_H

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

#include "StudentProfile.h"

class StudentCollection {

private:
	vector<StudentProfile> StCollection;
public:
	void PrintStudentProfileCollection();
	void takeIn_SP_Data(StudentProfile SP);
};

#endif
