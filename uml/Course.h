
#ifndef COURSE_H
#define COURSE_H


#include <iostream>
#include <map>

using namespace std;


bool CheckCourse(string ID);


class Course{
private:
int nbrStudents;//le nombre d'étudiant actuels dans ce cours
    string Course_ID;
    string Title;
    string TeacherName;
    string Location;
    int NbrStudentsMax;//le nombre d'étudiants maximal pouvant assister à ce cours
    //Student ListStudents[NbrStudentsMax];


public:

    Course(void);
    Course( string Course_ID,  string Title,  string TeacherName,  string Location,int NbrStudentsMax=25);





    void display(void);



     string getCourse_ID(void)  ;



    void setCourse_ID(const string &Course_ID);



     string getTitle(void) const;



    void SetTitle(const string &Title);



     string getTeacher(void ) const ;


    void setTeacher(const string &Teacher);



     string getLocation(void) const;



    void setLocation(const string &Location);




};
#endif //COURSESELECTIONSYSTEM_COURSE_H
