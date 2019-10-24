
#ifndef STUDENT_H
#define STUDENT_H
#include "Course.h"
#include <iostream>
#include <list>





Course ReadMap(string CourseID);



const int NBR_COURS_MAX=4;
using namespace std;
class Student{

private:
    string Student_ID;
    string First_Name;
    string Last_Name;
    string Login_ID;
    string Login_PSD;
   int nbrCoursInscrit;
   //list <Course> ListCourses;
public:
//Student( const Student &S);
Course ListCourses[NBR_COURS_MAX+1];

void Delete(Course C);
	int getnbr(void);
    Student(void);

   Student( string ID,  string FirstName, string LastName,  string Login,
             string PSD,list <Course> ListCourses,int nbrIns);

Student( string ID,  string FirstName, string LastName,  string Login,
             string PSD,Course ListCourses[],int nbrIns);



    void Display(void);
    string getStudent_ID(void) const;
    void setStudent_ID(const string &Student_ID);
     string getFirstName(void) const;
    void setFirstName(const string &First_Name);
     string getLastName(void) const ;
    void setLastName(const string &Last_Name) ;
     string getLogin_ID() const ;
    void AddCourse(Course newCourse,int nbr);
    void setLogin_ID(const string &Login_ID);
     string getLogin_PSD(void) const;
   void setLogin_PSD(const string &Login_PSD);
   Course getCourse(int i);

 void DisplayListCours(void);
bool CheckCourse(string CourseID);

};


#endif //COURSESELECTIONSYSTEM_STUDENT_H
