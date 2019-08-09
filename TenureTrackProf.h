#ifndef TenureTrackProf_H
#define	TenureTrackProf_H

#include<iostream>
#include<string>
#include<vector>
#include "CompSciProfessor.h"

using namespace std;

class TenureTrackProf : public CompSciProfessor {
private: 
	char rank;
	int YearOfExp;
public:
	void setRank(char rankseter);
	void setYearOfExp(int YofExpSeter);
	char getRank() const;
	int getYearOfExp() const;
	void print() const;
	float findSalary() const;
	TenureTrackProf();
	TenureTrackProf(char rank, int YearOfExp, string name, string email, long facultyId);
};
#endif