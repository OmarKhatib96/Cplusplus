

#include "Course.h"
#include "Student.h"





    Course::Course(void){


	}


bool CheckCourse(string ID){
    if(ReadMap(ID).getCourse_ID()=="0")
        return false;
    else
        return true;

}
   Course::Course( string C,  string T,  string Teacher,  string Loc,int NbrMax)
: Course_ID(C), Title(T), TeacherName(Teacher), Location(Loc),NbrStudentsMax(NbrMax){


}
  /* void  Course:: DisplayListStudents(void){
	for(int i=0;i<nbrStudents;i++)
		ListStudents[i].display();

	}

*/
    /*void Course::AddStudent(student S){
	if( nbrStudents>=NBR_MAX)
		cout<<"Maximum number reached for this class,choose another class please.\n");

	}
	else{
		ListStudents[nbrStudents]=C;
		nbrStudents++;}
    void Course::display(void)const{

	   cout<<"Course_ID:"<<Course_ID<<" Title:"<<Title<<" Teacher:"<<Teacher<<" Location:"<<Location<<endl<<"Students Partipating:"<<Course::Display();

}
*/


     string Course:: getCourse_ID(void) {
	return Course_ID;

}
       //


   void  Course::setCourse_ID(const string &CourseID){
		Course_ID=CourseID;


}
       // Course::Course_ID = Course_ID;


      string Course::getTitle(void) const{
	return Title;
}
        //return Title;


    void Course::SetTitle(const string &Tle){
	Title=Tle;

}
        //Course::Title = Title;


     string Course:: getTeacher(void ) const {
		return TeacherName;

}



    void Course:: setTeacher(const string &Tcher){
       TeacherName = Tcher;
}


    string Course::getLocation(void) const{
	return Location;

}



    void Course::setLocation(const string &Lction){
       Location = Lction;
    }


	void Course::display(void){



	cout<<"Course ID: " <<Course_ID<<" Title: "<<Title<<" "<<"Teacher :" <<TeacherName<<" "<<"Location: "<<Location<<" "<<"Maximum number of students: "<<NbrStudentsMax<<endl;



}


