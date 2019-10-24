//
// Created by 冯源 on 2018/11/16.
//

#ifndef COURSESELECTIONSYSTEM_LISTCOURSE_H
#define COURSESELECTIONSYSTEM_LISTCOURSE_H

#endif //COURSESELECTIONSYSTEM_LISTCOURSE_H

#include <iostream>
#include "Course.h"

class ListCourse{
private:
    Course* course;
    int countCourse;
    int MaxCourse;
public:
    ListCourse(int max){
        MaxCourse=max;
        countCourse=0;
        course=new Course[MaxCourse];
    }
    void addCourse(Course& stu){
        if(countCourse<MaxCourse){
            course[countCourse]=stu;
            countCourse++;
        } else{
            cout<<"The list is already full!"<<endl;
        }
    }

    void deleteCourse(string Cid){
        for(int i=0;i<countCourse;i++){
            if(course[i].getCourse_ID()==Cid){
                for(int j=i;j<countCourse;j++){
                    course[j]=course[j+1];
                }
                break;
            }
        }
        countCourse--;
    }

    void displayCourseList(){
        cout<<"*************************************************"<<endl;
        for(int i=0;i<countCourse;i++){
            course[i].display();
        }
        cout<<"*************************************************"<<endl;
    }

    void getCountCourse() const {
        cout<< countCourse<<" courses the student has."<<endl;
        return ;
    }

    ~ListCourse(){
        delete[] course;
    }
};