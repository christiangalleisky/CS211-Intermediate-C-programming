#ifndef Person_C
#define Person_C

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

#include "Person.h"

void Person::setPerson(long SocSN, string Fname_in, string Lname_in, int Age_in, char Gender_in) {
	this->SSN = SocSN;
	this->Fname = Fname_in;
	this->Lname = Lname_in;
	this->Age = Age_in;
	this->Gender = Gender_in;
}

void Person::PrintOutPerson() {
	cout << "The person's SSN is : " << SSN << endl;
	cout << "The person's first name is : " << Fname << endl;
	cout << "The person's last name is : " << Lname << endl;
	cout << "The person's age is : " << Age << endl;
	cout << "The gender of the person is : " << Gender << endl;
}

#endif
