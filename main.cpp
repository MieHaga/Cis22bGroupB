//
//  main.cpp
//  Group project
//
//  Created by Brandon Aitken on 4/26/17.
//  Copyright © 2017 Brandon Aitken. All rights reserved.
//

#include <iostream>
#include <array>
#include <fstream>

using namespace std;

int students[20][4];
//this will use 20 students for now, with the first name, last name, student number, then gpa


int main(int argc, const char * argv[]) {
    // insert code here...
  //  std::cout << "Hello, World!\n";
  //  return 0;
//print the menu
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
        case 2;
    }
}
