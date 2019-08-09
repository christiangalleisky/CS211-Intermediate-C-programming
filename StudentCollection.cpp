#ifndef StudentCollection_C
#define StudentCollection_C

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

#include "StudentCollection.h"

void StudentCollection::takeIn_SP_Data(StudentProfile SP) {
	StCollection.push_back(SP);
}

void StudentCollection::PrintStudentProfileCollection() {
	for (int i = 0; i < StCollection.size(); i++) {
		StCollection[i].PrintOutStudentProfile();
	}
}

#endif
