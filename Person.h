#ifndef Person_H
#define Person_H

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

class Person {
private:
	long SSN;
	string Fname;
	string Lname;
	int Age;
	char Gender; // 'M' for Male and 'F' for Female
public:
	void PrintOutPerson();
	void setPerson(long SSN, string Fname, string Lname, int Age, char Gender);
};

#endif
#pragma once
