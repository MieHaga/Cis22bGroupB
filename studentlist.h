#ifndef STUDENTLIST_H
#define STUDENTLIST_H
#include <string>
using namespace std;

//Linked List: Textbook ch17.2  p.1027


//We can use Template.
class StudentList {

private:
	struct ListNode {				//can also be class.
		int studentID;
		string firstName;			
		string lastName;
		struct ListNode *next;
	};

	ListNode *head;

public:
	//Do we need defult constructor?

	//Constructor
	StudentList() {
		head = nullptr;
	}

	//Destructor
//	~StudentList();

//Linked list operations. 
	void addStudentInfo(int, string, string);			//Add a new studdent information.
	void reviseLastName(int, string);			//This member fuction is to make sure the way to access to the specific member variable of list.
};


void StudentList::addStudentInfo(int ID, string first, string last) {
	ListNode *newNode;
	ListNode *nodePtr;				//To move through the list.

	newNode = new ListNode;
	newNode->studentID = ID;
	newNode->firstName = first;
	newNode->lastName = last;
	newNode->next = nullptr;

	if (!head) {
		head = newNode;
	}
	else {
		nodePtr = head;
		while (nodePtr->next) {
			nodePtr = nodePtr->next;		//Find the last node in the list
		}
		nodePtr->next = newNode;
	}

}

void StudentList::reviseLastName(int ID, string last) {

	ListNode *node = head;

	while (node) {
		node = node->next;
		if (node->studentID == ID) {			//search by studentID becasue studentID should not be duplicated.
			node->lastName = last;
			break;
		}
	}
}


#endif


//template <class T1, class T2>						//If there are two different data types.
//int largest(const T1 &var1, T2 &var2){ }