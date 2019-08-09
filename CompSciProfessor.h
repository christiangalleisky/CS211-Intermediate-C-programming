#ifndef CompSciProfessor_H
#define CompSciProfessor_H

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class CompSciProfessor {
private:
	string name;
	string email;
	long facultyId;
public:
	void setName(string CSProfName);
	void setEmail(string CSProfEmail);
	void setFacultyId(long idNum);
	string getName() const;
	string getEmail() const;
	long getFacultyId() const;
	CompSciProfessor();
	CompSciProfessor(string CSProfName, string CSProfEmail, long idNum);

};

#endif
