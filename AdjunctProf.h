#ifndef AdjunctProf_H
#define AdjunctProf_H

#include<iostream>
#include<string>
#include<vector>
#include "CompSciProfessor.h"

using namespace std;

class AdjunctProf : public CompSciProfessor {
private:
	char degree;
	int NoOfTA;
	int NoOfCourses;
public:
	void setDegree(char DegreeChar);
	void setNoOfTA(int NumOfTA);
	void setNoOfCourses(int NumOfCourses);
	char getDegree() const;
	int getNoOfTA() const;
	int getNoOfCourses() const;
	AdjunctProf();
	AdjunctProf(char DegreeChar, int NumOfTA, int NumOfCourses, string CSProfName, string CSProfEmail, long idNum);
	void print() ;
	float findSalary() const;
};
#endif
