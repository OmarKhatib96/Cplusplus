//
// Created by 冯源 on 2018/11/16.
//

#ifndef COURSESELECTIONSYSTEM_STUDENT_H
#define COURSESELECTIONSYSTEM_STUDENT_H

#endif //COURSESELECTIONSYSTEM_STUDENT_H

#include <iostream>

using namespace std;
class Student{
private:
    string Student_ID;
    string First_Name;
    string Last_Name;
    string Login_ID;
    string Login_PSD;
public:
    Student() {
    }

    Student(const string &Student_ID, const string &First_Name, const string &Last_Name, const string &Login_ID,
            const string &Login_PSD) : Student_ID(Student_ID), First_Name(First_Name), Last_Name(Last_Name),
                                       Login_ID(Login_ID), Login_PSD(Login_PSD) {
    }

    void display(){
        cout<<"Student_ID:"<<Student_ID<<" First_Name:"<<First_Name<<" Last_Name:"<<Last_Name
        <<" Login_ID:"<<Login_ID<<" Login_PSD:"<<Login_PSD<<endl;
    }

    const string &getStudent_ID() const {
        return Student_ID;
    }

    void setStudent_ID(const string &Student_ID) {
        Student::Student_ID = Student_ID;
    }

    const string &getFirst_Name() const {
        return First_Name;
    }

    void setFirst_Name(const string &First_Name) {
        Student::First_Name = First_Name;
    }

    const string &getLast_Name() const {
        return Last_Name;
    }

    void setLast_Name(const string &Last_Name) {
        Student::Last_Name = Last_Name;
    }

    const string &getLogin_ID() const {
        return Login_ID;
    }

    void setLogin_ID(const string &Login_ID) {
        Student::Login_ID = Login_ID;
    }

    const string &getLogin_PSD() const {
        return Login_PSD;
    }

    void setLogin_PSD(const string &Login_PSD) {
        Student::Login_PSD = Login_PSD;
    }
};