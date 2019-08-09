#ifndef TenureTrackProf_C
#define	TenureTrackProf_C

#include "TenureTrackProf.h"

void TenureTrackProf::setRank(char rankseter) {
	rank = rankseter;
}
void TenureTrackProf::setYearOfExp(int YofExpSeter) {
	YearOfExp = YofExpSeter;
}
char TenureTrackProf::getRank() const {
	return rank;
}
int TenureTrackProf::getYearOfExp() const {
	return YearOfExp;
}
void TenureTrackProf::print() const {
	cout << "Name: " << getName() << endl;
	cout << "Email: " << getEmail() << endl;
	cout << "ID number: " << getFacultyId() << endl;
	cout << "Rank: " << rank << endl;
	cout << "Years of experience: " << YearOfExp << endl;
}
float TenureTrackProf::findSalary() const {
	float sum;
	switch (rank) {
	case 'A':
		sum = 65000.0;
		sum += (1500.0 * YearOfExp);
		break;
	case 'S':
		sum = 80000.0;
		sum += (1500.0 * YearOfExp);
		break;
	case 'F':
		sum = 90000.0;
		sum += (1500.0 * YearOfExp);
		break;
	}
	return sum;
}
TenureTrackProf::TenureTrackProf() : CompSciProfessor() {
	rank = 'A';
	YearOfExp = 0;
}
TenureTrackProf::TenureTrackProf(char rank, int YearOfExp, string name, string email, long facultyId) : CompSciProfessor(name, email, facultyId) {
	this->rank = rank;
	this->YearOfExp = YearOfExp;
}
#endif