
#ifndef INTERFACE_H
#define INTERFACE_H

#include <iostream>
#include <string>
#include  <map>

#include "Student.h"

#include <list>
#include <math.h>
#include <fstream>
const int NBR_ETUDIANT_MAX=100;
using namespace std;
class Interface{

private:
	int choice;
	string choix;

public:
Interface(void);
void Home(Student *S,Student ListStudents[],int nbr);
int   StudentFileReading(char const* FileName,Student ListStudents[]);
int Logout(Student *S);
bool CheckPSW(Student *S,string Psw);
void AvailableCourses(const char * FileName,Student *S);
Student * Login(Student ListStudents[],int nbr);
Student * CheckID(string Id,Student ListStudents[],int nbr);
void StudentFileUpdating(char const* FileName,Student ListStudents[],int nbr);
};
#endif

