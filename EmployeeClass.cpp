#ifndef Employee_C
#define Employee_C

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

#include "EmployeeHeader.h"

int Employee::totalNumofEmployees = 0;
int Employee::nextEmpId = 1000;
int Employee::nextOfficeNo = 10;

Employee::Employee() {
		name = "Unknown";
//		officeNo = nextOfficeNo; //illegal to modify const values
		//empId = nextEmpId;
		deptNo = 0;
		empPosition = 'E';
		yearOfExp = 0;
		salary = 0;
		totalNumofEmployees = totalNumofEmployees++;
		nextEmpId = nextEmpId++;
		nextOfficeNo = nextOfficeNo++;
}
Employee::~Employee() {
	totalNumofEmployees--;
}
Employee::Employee(string theName, int theDeptNo, char theEmpPosition, int theYearOfExp) {
		name = theName;
	//	officeNo = nextOfficeNo;
	//	empId = nextEmpId;
		deptNo = theDeptNo;
		empPosition = theEmpPosition;
		yearOfExp = theYearOfExp;
		salary = 0;
		totalNumofEmployees = totalNumofEmployees++;
		nextEmpId = nextEmpId++;
		nextOfficeNo = nextOfficeNo++;
}
void Employee::Print() const {
		cout << "The Employeee's name is: " << name << endl;
		cout << "The Employee's office number is: " << officeNo << endl;
		cout << "The Employee's  ID is: " << empId << endl;
		cout << "The Employee's  department number is: " << deptNo << endl;
		cout << "The Employee's position is: " << empPosition << endl;
		cout << "The Employee has " << yearOfExp << " years of experience." << endl;
		cout << "The Employee's salary is: $" << salary << endl;
		cout << "The total number of employees is: " << totalNumofEmployees << endl;
		cout << "The next Employee ID is: " << nextEmpId << endl;
		cout << "The next office number is: " << nextOfficeNo << endl;
}
void Employee::GetInfo() {
		cout << "Input a name, an employee position ('E': entry level, 'M': manager, 'D': Director, 'P':Project_leader) and years of experience" << endl;
		cin >> name;
		string lastName;
		cin >> lastName;
		name = name + " " + lastName;
		cin >> empPosition;
		cin >> yearOfExp;
}

#endif