//
// Created by 冯源 on 2018/11/16.
//

#ifndef COURSESELECTIONSYSTEM_COURSE_H
#define COURSESELECTIONSYSTEM_COURSE_H

#endif //COURSESELECTIONSYSTEM_COURSE_H
#include <iostream>
using namespace std;

class Course{
private:
    string Course_ID;
    string Title;
    string Teacher;
    string Location;
public:
    Course(){};

    Course(const string &Course_ID, const string &Title, const string &Teacher, const string &Location) : Course_ID(
            Course_ID), Title(Title), Teacher(Teacher), Location(Location) {}

    void addCourse(){

    }

    void display(){
        cout<<"Course_ID:"<<Course_ID<<" Title:"<<Title<<" Teacher:"<<Teacher<<" Location:"<<Location<<endl;
    }

    const string &getCourse_ID() const {
        return Course_ID;
    }

    void setCourse_ID(const string &Course_ID) {
        Course::Course_ID = Course_ID;
    }

    const string &getTitle() const {
        return Title;
    }

    void setTitle(const string &Title) {
        Course::Title = Title;
    }

    const string &getTeacher() const {
        return Teacher;
    }

    void setTeacher(const string &Teacher) {
        Course::Teacher = Teacher;
    }

    const string &getLocation() const {
        return Location;
    }

    void setLocation(const string &Location) {
        Course::Location = Location;
    }


};