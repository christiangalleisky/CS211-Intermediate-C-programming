#ifndef CompSciProfessor_C
#define CompSciProfessor_C

#include "CompSciProfessor.h"

using namespace std;

void CompSciProfessor::setName(string CSProfName) {
	name = CSProfName;
}
void CompSciProfessor::setEmail(string CSProfEmail) {
	email = CSProfEmail;
}
void CompSciProfessor::setFacultyId(long idNum) {
	facultyId = idNum;
}
string CompSciProfessor::getName() const {
	return name;
}
string CompSciProfessor::getEmail() const{
	return email;
}
long CompSciProfessor::getFacultyId() const{
	return facultyId;
}
CompSciProfessor::CompSciProfessor() {
	name = "John Doe";
	email = "JDoe@dud.com";
	facultyId = 0;
}
CompSciProfessor::CompSciProfessor(string CSProfName, string CSProfEmail, long idNum) {
	name = CSProfName;
	email = CSProfEmail;
	facultyId = idNum;
}

#endif