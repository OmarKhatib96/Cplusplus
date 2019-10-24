

#include "Student.h"




Course ReadMap(string CourseID){


map <string,Course> CourseMap;


CourseMap["CCMP2A_001"]=Course("CCMP2A_001","CPP","PU","S102",25);
CourseMap["CCMP2A_002"]=Course("CCMP2A_002","Database","OC","S103",25);
CourseMap["CCMP2A_003"]=Course("CCMP2A_003","Deep Learning","PM","HS002",25);
CourseMap["CCMP2A_004"]=Course("CCMP2A_004","Embedded System","MF","Z005",25);
CourseMap["CCMP2A_005"]=Course("CCMP2A_005","JAVA","SC","S101",25);
CourseMap["CCMP2A_006"]=Course("CCMP2A_006","Microelectronics","KT","G201",25);
CourseMap["CCMP2A_007"]=Course("CCMP2A_007","Network","TT","Z001",25);
CourseMap["CCMP2A_008"]=Course("CCMP2A_008","Production Management","CY","Amphi",25);
CourseMap["CCMP2A_009"]=Course("CCMP2A_009","Robotics","DD","S103",25);
CourseMap["CCMP2A_010"]=Course("CCMP2A_010","UML","JB","HS002",25);

if(CourseMap.find(CourseID)!=CourseMap.end()){

	return CourseMap[CourseID];

	}


		else{
			return Course("0","0000","0000","0000");

}



}



void Student::Delete(Course C){

		bool trouve=false;
		for(int i=0;i<NBR_COURS_MAX;i++){
			if(ListCourses[i].getCourse_ID()==C.getCourse_ID()){
				trouve=true;
				for(int j=i;j<nbrCoursInscrit;j++)
					ListCourses[j]=ListCourses[j+1];





}



}
		if(trouve)
				nbrCoursInscrit--;

				cout<<C.getCourse_ID()<<" has been deleted successfully\n\n";



}//fin fonction




   Student::Student(void){
	nbrCoursInscrit=0;

}


   Student::Student( string ID,  string FirstName, string LastName,  string Login,
             string PSD,Course LC[],int nbrIns=0):Student_ID(ID), First_Name(FirstName), Last_Name(LastName),
                                       Login_ID(Login), Login_PSD(PSD),nbrCoursInscrit(nbrIns){


		for (int i=0;i<NBR_COURS_MAX;i++)
			ListCourses[i]=LC[i];



    }


   void Student::DisplayListCours(void){


/*
	list <Course>::iterator it ;
	it=ListCourses.begin();
	for (it;it!=ListCourses.end();it++)
		it->display();
			*/
	//cout<<"You are registered to "<<nbrCoursInscrit<<" courses"<<endl;

	if(getnbr()==0)
        cout<<"You have no courses registred,please add some by choosing the browsing option\n\n";
    else{
	for(int i=0;i<getnbr();i++){

		//cout<<i<<"-";
		if(ReadMap(ListCourses[i].getCourse_ID()).getCourse_ID()!="0")
			ListCourses[i].display();}
}


}//fin void
    void Student::Display(void){
        cout<<"Student_ID:"<<Student_ID<<" First_Name:"<<First_Name<<" Last_Name:"<<Last_Name
        <<" Login_ID:"<<Login_ID<<" Login_PSD:"<<Login_PSD<<endl;

	Student::DisplayListCours();




}


     string Student::getStudent_ID(void) const{
       return Student_ID;

}
    void Student::setStudent_ID(const string &StudentID){
       Student_ID = StudentID;
   }

     string Student::getFirstName(void) const{
        return First_Name;
}


    void Student:: setFirstName(const string &FirstName){
        First_Name = FirstName;
    }

     string Student::getLastName(void) const{
        return Last_Name;
    }

    void Student::setLastName(const string &LastName){
       Last_Name = LastName;
    }

     string Student::getLogin_ID(void) const {
       return Login_ID;
    }

    void Student::setLogin_ID(const string &LoginID){
      Login_ID = LoginID;
    }

	 void Student::AddCourse(Course NewCourse,int nbr){
	//cout<<getnbr()<<getnbr();
		if(nbr<NBR_COURS_MAX){
			ListCourses[nbr]=(NewCourse);//we insert the student at the back of the list
		//nbrCoursInscrit++;
			nbrCoursInscrit++;

			cout<<"The course "<<NewCourse.getCourse_ID()<<" has been successfully added!\n";

}


}
     string Student::getLogin_PSD(void) const{
        return Login_PSD;
     }

    void Student::setLogin_PSD(const string &LoginPSD){
       Login_PSD = LoginPSD;}



bool Student::CheckCourse(string CourseID){
	for(int i=0;i<NBR_COURS_MAX;i++){
		if(ListCourses[i].getCourse_ID()==CourseID)
			return true;}

	return false;
}

	int Student::getnbr(void){
			return nbrCoursInscrit;}
/*
list <Course> Student::getList_Courses(void){
	return ListCourses;

}*/
