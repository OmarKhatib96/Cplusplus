#include <iostream>
#include <cstring>
#include "ListStudent.h"
#include "ListCourse.h"
#include "math.h"
using namespace std;
int main() {

//        cout<<"Please input your account:";
//        string account;
//        cin>>account;
//        cout<<endl;

    Student stu1("S17001","Jean","Le Bleu","jean.lebleu","uelbelnaej");
    Student stu2("S17002","Marie","Curry","marie.curry","yrruceiram");
    stu1.display();
    ListStudent listStudent(5);
    listStudent.addStudent(stu1);
    listStudent.addStudent(stu2);
    listStudent.displayStudentList();
    listStudent.deleteStudent("S17001");
    listStudent.displayStudentList();

    Course cou1("CCMP2A-001","CPP","PU","S102");
    Course cou2("CCMP2A-002","Database","OC","S103");
    cou1.display();
    ListCourse listCourse(5);
    listCourse.addCourse(cou1);
    listCourse.addCourse(cou2);
    listCourse.displayCourseList();
    listCourse.deleteCourse("CCMP2A-002");
    listCourse.displayCourseList();


}