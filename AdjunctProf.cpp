#ifndef AdjunctProf_C
#define AdjunctProf_C

#include "AdjunctProf.h"

using namespace std;

void AdjunctProf::setDegree(char DegreeChar) {
	degree = DegreeChar;
}
void AdjunctProf::setNoOfTA(int NumOfTA) {
	NoOfTA = NumOfTA;
}
void AdjunctProf::setNoOfCourses(int NumOfCourses) {
	NoOfCourses = NumOfCourses;
}
char AdjunctProf::getDegree() const {
	return degree;
}
int AdjunctProf::getNoOfTA() const {
	return NoOfTA;
}
int AdjunctProf::getNoOfCourses() const {
	return NoOfCourses;
}
AdjunctProf::AdjunctProf(){ 
	degree = 'B';
	NoOfTA = 0;
	NoOfCourses = 0;
}
AdjunctProf::AdjunctProf(char DegreeChar, int NumOfTA, int NumOfCourses, string CSProfName, string CSProfEmail, long idNum) : CompSciProfessor(CSProfName, CSProfEmail, idNum) {
	degree = DegreeChar;
	NoOfTA = NumOfTA;
	NoOfCourses = NumOfCourses;
}
void AdjunctProf::print()  {
	cout << "Name: " << getName() << endl;
	cout << "Email: " << getEmail() << endl;
	cout << "ID number: " << getFacultyId() << endl;
	cout << "The degree is: " << degree << endl;
	cout << "The number of classes TA'd for is: " << NoOfTA << endl;
	cout << "The number of classes taught as a teaacher is: " << NoOfCourses << endl;
}
float AdjunctProf::findSalary() const {
	float sum = 0;
	switch (degree) {
	case 'B': 
		sum = 1500.0 * NoOfTA;
		sum += (3000.0 * NoOfCourses);
		break;
	case 'M': 
		sum = 2000.0 * NoOfTA;
		sum += (4000.0 * NoOfCourses);
		break;
	case 'P': 
		sum = 2500.0 * NoOfTA;
		sum += (5000.0 * NoOfCourses); 
		break;
	}
	return sum;
}

#endif