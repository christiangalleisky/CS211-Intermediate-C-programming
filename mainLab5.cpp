#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<vector>

#include "EmployeeHeader.h"

//friend EmployeeClass;

void SetSalary(Employee& emp) {
	if (emp.empPosition == 'E' && emp.yearOfExp < 2) {
		emp.salary = 50000; // 'E': entry level, 'M': manager, 'D': Director, 'P':Project_leader 
	}else if (emp.empPosition == 'E' && emp.yearOfExp >= 2) {
		emp.salary = 55000; 
	}else if (emp.empPosition == 'P' && emp.yearOfExp < 4) {
		emp.salary = 60000;
	}else if (emp.empPosition == 'P' && emp.yearOfExp >= 4) {
		emp.salary = 65000;
	}else if (emp.empPosition == 'M') {
		emp.salary = 70000; 
	}else if (emp.empPosition == 'D') {
		emp.salary = 80000;
	}
}

int main() {
	int status = 0;
	Employee emp1;
	emp1.Print();
	Employee emp2("unknown", 10, '?', 0);
	emp2.GetInfo();
	SetSalary(emp2);
	emp2.Print();
	string x;
	cin >> x;
	return status;
}