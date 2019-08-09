//********************************************************************************************
// CS 211 - Lab 10
// Complete the program Lab10(Program).cpp and implement the routines that are not implemented
//********************************************************************************************

/* Use the comments given in each routine to complete the following program */


#include <iostream>
#include<string>
#include<fstream>

using namespace std;

class Node;
typedef Node* NodePtr;

class DLL;
class Node
{
	friend class DLL;
private:
	int stId;
	string stName;
	string stEmail;
	int stAge;
	NodePtr next;
	NodePtr prev;
};

class DLL
{
private:
	NodePtr  top;
	void destroy(NodePtr&);

public:
	DLL();
	DLL(const DLL& source);
	~DLL();
	void insertDataFromFile();
	void print();
	bool search(int);
	void insertAfterFirst(int id, string name, string email, int age);
	void insertBeforeFirst(int id, string name, string email, int age);
	void insertAfterLast(int id, string name, string email, int age);
	void insertBeforeLast(int id, string name, string email, int age);
	void remove(int);
	void copy(NodePtr top1, NodePtr& top2);
};

//--------------------------------------------
//--------------------------------------------
// the default constructor
DLL::DLL()
{
	top = NULL;
}
//--------------------------------------------
//--------------------------------------------
// the copy constructor
DLL::DLL(const DLL& source)
{
	copy(source.top, top);
}

//--------------------------------------------
//--------------------------------------------
// the destructor
DLL::~DLL()
{
	destroy(top);
}

//--------------------------------------------
//--------------------------------------------
// Read a transaction file and insert the data into it
// after reading a set of data you can call any of the 
// insert functions to insert the node into the linked list 
/* use the following data to test your program
	76543	Mary	mary@csusm.edu		19
	98765	Kathy	kathy@csusm.edu		30
	16438	Flora	flora@csusm.edu		25
	43260	Peter	peter@csusm.edu		29
	87590	kim		kim@csusm.edu		31
*/
void DLL::insertDataFromFile()
{
	//use insertafterlast method
	ifstream fin;
	fin.open("Transaction.txt");
	int x, y;
	string u, n;
	while (fin >> x) {
		fin >> u;
		fin >> n;
		fin >> y;
		insertAfterLast(x, u, n, y);
	}
}
//--------------------------------------------
//--------------------------------------------
// print the linked list
void DLL::print()
{
	NodePtr curr = top;
	while (curr != NULL) {
		cout << "-----------------------------------" << endl;
		cout << "Student id: " << curr->stId << endl;
		cout << "Student name: " << curr->stName << endl;
		cout << "Student email: " << curr->stEmail << endl;
		cout << "Student age: " << curr->stAge << endl;
		cout << endl;
		curr = curr->next;
	}
}
//--------------------------------------------
//--------------------------------------------
// search for a particular student id in the list
bool DLL::search(int id)
{
	bool found = false;
	NodePtr curr = top;

	while (curr != NULL && !found) {
		if (curr->stId == id) {
			found = true;
		}
		curr = curr->next;
	}
	return found;
}
//--------------------------------------------
//--------------------------------------------
// creates a node and insert the node on the top of the
// linked list but after the first node. For example if the
// list constains 1 <--> 20 <-->13 <--> 4 <--> 5 <--> 6 <--> (links to the first node which is 1)
// after inserting 10, we should get:
// list constains 1 <--> 10 <--> 20 <-->13 <--> 4 <--> 5 <--> 6 <--> (links to the first node which is 1)

void DLL::insertAfterFirst(int id, string name, string email, int age)
{
	NodePtr curr;
	NodePtr newElement = new Node();
	newElement->stId = id;
	newElement->stName = name;
	newElement->stEmail = email;
	newElement->stAge = age;
	curr = top;
	if (top == NULL) {
		newElement->prev = NULL;
		newElement->next = NULL;
		top = newElement;
		cout << "inserted at top" << endl;
	}
	else if (top->next == NULL) {
		newElement->prev = top;
		newElement->next = NULL;
		top->next = newElement;
		top->prev = NULL;
		cout << "inserted above top" << endl;
	}
	else {
		newElement->prev = curr;
		newElement->next = curr->next;
		curr->next = newElement;
		curr = curr->next->next;
		curr->prev = newElement;
	}
}
//--------------------------------------------
//--------------------------------------------
// creates a node and insert the node on the top of the
// linked list before the first node. For example if the
// list constains 1 <--> 20 <-->13 <--> 4 <--> 5 <--> 6 <--> (links to the first node which is 1)
// after inserting 10, we should get:
// list constains 10 <--> 1 <--> 20 <-->13 <--> 4 <--> 5 <--> 6 <--> (links to the first node which is 10)

void DLL::insertBeforeFirst(int id, string name, string email, int age)
{
	NodePtr curr;
	NodePtr newElement = new Node();
	newElement->stId = id;
	newElement->stName = name;
	newElement->stEmail = email;
	newElement->stAge = age;
	curr = top;
	if (top == NULL) {
		newElement->prev = NULL;
		newElement->next = NULL;
		top = newElement;
		cout << "inserted at top" << endl;
	}
	else if (top->next == NULL) {
		newElement->prev = top;
		newElement->next = NULL;
		top->next = newElement;
		top->prev = NULL;
		cout << "inserted above top" << endl;
	}
	else {
		newElement->prev = NULL;
		newElement->next = curr;
		curr->prev = newElement;
		top = curr->prev;
	}
}
//--------------------------------------------
//--------------------------------------------
// creates a node and insert the node on the bottom of the
// linked list after the last node. For example if the
// list constains 1 <--> 20 <-->13 <--> 4 <--> 5 <--> 6 <--> (links to the first node which is 1)
// after inserting 10, we should get:
// list constains 1 <--> 20 <-->13 <--> 4 <--> 5 <--> 6 <--> 10 <-->(links to the first node which is 1)

void DLL::insertAfterLast(int id, string name, string email, int age)
{
	NodePtr curr;
	NodePtr newElement = new Node();
	newElement->stId = id;
	newElement->stName = name;
	newElement->stEmail = email;
	newElement->stAge = age;
	curr = top;
	if (top == NULL) {
		newElement->prev = NULL;
		newElement->next = NULL;
		top = newElement;
		cout << "inserted at top" << endl;
	}
	else if (top->next == NULL) {
		newElement->prev = top;
		newElement->next = NULL;
		top->next = newElement;
		top->prev = NULL;
		cout << "inserted above top" << endl;
	}
	else {
		while (curr->next != NULL) {
			curr = curr->next;
		}
		newElement->prev = curr;
		newElement->next = NULL;
		curr->next = newElement;
	}
}
//--------------------------------------------
//--------------------------------------------
// creates a node and insert the node on the bottom of the
// linked list before the last node. For example if the
// list constains 1 <--> 20 <-->13 <--> 4 <--> 5 <--> 6 <--> (links to the first node which is 1)
// after inserting 10, we should get:
// list constains 1 <--> 20 <-->13 <--> 4 <--> 5 <--> 10 <--> 6 <--> (links to the first node which is 1)

void DLL::insertBeforeLast(int id, string name, string email, int age)
{
	NodePtr curr;
	NodePtr newElement = new Node();
	newElement->stId = id;
	newElement->stName = name;
	newElement->stEmail = email;
	newElement->stAge = age;
	curr = top;
	if (top == NULL) {
		newElement->prev = NULL;
		newElement->next = NULL;
		top = newElement;
		cout << "inserted at top" << endl;
	}
	else if (top->next == NULL) {
		newElement->prev = top;
		newElement->next = NULL;
		top->next = newElement;
		top->prev = NULL;
		cout << "inserted above top" << endl;
	}
	else {
		while (curr->next->next != NULL) {
			curr = curr->next;
		}
		newElement->prev = curr;
		newElement->next = curr->next;
		curr->next = newElement;
		curr = curr->next->next;
		curr->prev = newElement;
	}
}
//--------------------------------------------
//--------------------------------------------
// removes a node from the list based on the given student id 
void DLL::remove(int id)
{
	NodePtr temp, curr = top;
	if (top->stId == id) {
		temp = top;
		top = top->next;
	}
	while (curr->next->stId != id) {
		curr = curr->next;
	}
	temp = curr->next;
	curr->next = curr->next->next;//need previous pointer assignment
	delete temp;
}
//--------------------------------------------
//--------------------------------------------
// copies one list into another
void DLL::copy(NodePtr atop, NodePtr& btop)
{
	NodePtr acurr, bcurr, bcurrprevious;
	if (atop != NULL) {
		btop = new Node;
		btop->stId = atop->stId;
		btop->stName = atop->stName;
		btop->stEmail = atop->stEmail;
		btop->stAge = atop->stAge;
		acurr = atop;
		bcurr = btop;
		bcurr->prev = NULL;
		bcurr->next = NULL;
		bcurrprevious = bcurr;
		while (acurr->next != NULL) {
			bcurr->next = new Node;
			bcurr = bcurr->next;
			acurr = acurr->next;
			bcurr->prev = bcurrprevious;
			bcurrprevious = bcurr;
			bcurr->stId = acurr->stId;
			bcurr->stName = acurr->stName;
			bcurr->stEmail = acurr->stEmail;
			bcurr->stAge = acurr->stAge;
		}
		bcurr->next = NULL;
	}
}
//--------------------------------------------
// deallocate the nodes in a linked list
void DLL::destroy(NodePtr& top)
{
	NodePtr curr, temp;
	curr = top;
	while (curr != NULL) {
		temp = curr;
		curr = curr->next;
		delete temp;
	}
	top = NULL;
}

//--------------------------------------------

int main()
{
	DLL list1;
	list1.insertDataFromFile();
	list1.print();
	system("PAUSE");
	list1.insertAfterFirst(54321, "Jim", "jim@csusm.edu", 25);
	list1.insertBeforeFirst(54123, "Joe", "joe@csusm.edu", 35);
	list1.insertAfterLast(63421, "Adam", "adam@csusm.edu", 20);
	list1.insertBeforeLast(66641, "Nancy", "nancy@csusm.edu", 27);
	list1.print();
	system("PAUSE");
	bool  found = list1.search(12321);
	if (found)
		cout << "the record was found" << endl;
	else
		cout << "the record was not found" << endl;
	system("PAUSE");
	list1.remove(54321);
	list1.print();
	system("PAUSE");

	DLL list2(list1);
	list2.print();
	system("PAUSE");
	return 0;
}
//--------------------------------------------