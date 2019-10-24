//
// Created by 冯源 on 2018/11/16.
//

#ifndef COURSESELECTIONSYSTEM_LISTSTUDENT_H
#define COURSESELECTIONSYSTEM_LISTSTUDENT_H

#endif //COURSESELECTIONSYSTEM_LISTSTUDENT_H

#include <iostream>
#include "Student.h"

class ListStudent{
private:
    Student* student;
    int countStudent;
    int MaxStudent;
public:
    ListStudent(int max){
        MaxStudent=max;
        countStudent=0;
        student=new Student[MaxStudent];
    }
    void addStudent(Student& stu){
        if(countStudent<MaxStudent){
            student[countStudent]=stu;
            countStudent++;
        } else{
            cout<<"The list is already full!"<<endl;
        }
    }

    void deleteStudent(string Sid){
        for(int i=0;i<countStudent;i++){
            if(student[i].getStudent_ID()==Sid){
                for(int j=i;j<countStudent;j++){
                    student[j]=student[j+1];
                }
                break;
            }
        }
        countStudent--;
    }

    void displayStudentList(){
        cout<<"*************************************************"<<endl;
        for(int i=0;i<countStudent;i++){
            student[i].display();
        }
        cout<<"*************************************************"<<endl;
    }

    void getCountStudent() const {
        cout<< countStudent<<" students in the class."<<endl;
        return ;
    }

    ~ListStudent(){
        delete[] student;
    }
};