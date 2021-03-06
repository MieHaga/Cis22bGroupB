//
//  main.cpp
//  Group project
//
//  Created by Brandon Aitken on 4/26/17.
//  Copyright © 2017 Brandon Aitken. All rights reserved.
//

#include "studentlist.h"            //Linked list header file
#include <iostream>
#include <array>
#include <string>
#include <fstream>

using namespace std;

int students[20][4];
//this will use 20 students for now, with the first name, last name, student number, then gpa
void readfile();

int main(int argc, const char * argv[]) {

    void readfile();
    
    int option;
    cout << "Welcome to the student sorter" << endl <<
            " Please select a option to continue" << endl <<
            "1. Sort by first name" << endl <<
            "2. Sort by last name" << endl <<
            "3. Sort by student number" << endl <<
            "4. Sort by GPA" << endl;
    cin >> option;
    cout << endl << option << endl;

    
    switch(option){
            
        case 1:
            cout << "option 1";
            break;
        case 2:
            cout << "option 2";
            break;
        case 3:
            cout << "option 3";
            break;
        case 4:
            cout << "option 4";
            break;
        default:
            cout << "not a valid choice";
            break;
    }
    
    //Linked List Example
    StudentList list;

	list.addStudentInfo(01234567, "Mie", "Haga");           //(studentID, FirstName, LastName)
    list.addStudentInfo(11111111, "Jiayao", "Ye");
    
    list.reviseLastName(01234567,  "Ye");                   //Change my last name to "Ye"
    //end
    
}

void readfile(){
    ifstream studentfile;
    studentfile.open("students.txt");
    for(int i = 0; i < 19; i++){
        for(int b = 0; i < 3; i++){
            studentfile >> students[i][b];
        }
    }
    
    
    
    
    
}
