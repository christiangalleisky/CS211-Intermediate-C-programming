#ifndef Employee_H
#define Employee_H

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

class Employee {

	friend void SetSalary(Employee& emp);

private:
	string  name;
	static int nextOfficeNo;
	static int nextEmpId;

	const long officeNo = nextOfficeNo;
	const long empId = nextEmpId;
	int deptNo;
	char empPosition; // 'E': entry level, 'M': manager, 'D': Director, 'P':Project_leader 
	int yearOfExp;
	float salary;
	static int totalNumofEmployees;

public:
	Employee();
	~Employee();
	Employee(string theName, int theDeptNo, char theEmpPosition, int theYearOfExp);
	void Print() const;
	void GetInfo();
};

#endif