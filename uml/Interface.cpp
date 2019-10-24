#include <iostream>
#include <string>
#include  <map>

#include "Student.h"
#include "Course.h"
#include <list>
#include <math.h>
#include <fstream>
#include "Interface.h"
using namespace std;





void Interface::StudentFileUpdating(char const* FileName,Student ListStudents[],int nbr ){


ofstream ficout(FileName);


	for (int i=0;i<nbr;i++){
        ficout<<ListStudents[i].getStudent_ID()<<" ";
        ficout<<ListStudents[i].getFirstName()<<" ";
        ficout<<ListStudents[i].getLastName()<<" ";
        ficout<<ListStudents[i].getLogin_ID()<<" ";
        ficout<<ListStudents[i].getLogin_PSD()<<" ";
        ficout<<ListStudents[i].getnbr()<<" ";
        if(ListStudents[i].getnbr()!=0){
        for(int j=0;j<ListStudents[i].getnbr();j++){
                ficout<<ListStudents[i].ListCourses[j].getCourse_ID()<<" ";
        }
        }
        ficout<<"\n";




}//end for





}//end fonction

 Interface::Interface(void) {



}
Student * Interface:: CheckID(string Id,Student  ListStudents[],int nbr){

	for (int i=0;i<nbr;i++){
		if(ListStudents[i].getStudent_ID()==Id ){


            Student *S;
            S=&ListStudents[i];
			return S;}

	}

	return NULL;


}








int    Interface::StudentFileReading(char const* FileName,Student ListStudents[]){

int j=0;
ifstream ficin(FileName);


	while(!ficin.eof()){//tant qu'on a pas atteint la fin du fichier
	string Student_ID ,First_Name,Last_Name,Login_ID,Login_PSD;
	int nbrIns;
string curseur;

		Course listC[NBR_COURS_MAX+1];


		ficin>>Student_ID;//lecture des donnée du fichier
		ficin>>First_Name;
		ficin>>Last_Name;
		ficin>>Login_ID;
		ficin>>Login_PSD;
		ficin>>nbrIns;

        if(nbrIns!=0){
			for(int i=0;i<nbrIns;i++){
				//cout<<curseur<<endl;
				ficin>>curseur;

				listC[i]=ReadMap(curseur);


		}}



		Student S(Student_ID,First_Name,Last_Name,Login_ID,Login_PSD,listC,nbrIns);
		ListStudents[j]=S;//we insert the student at the back of the list
        j++;


	//we going to create a object student that we're going to store in the list






}//fin while

return j;
}
int Interface::Logout(Student *S){
	cout<<"\n\nGood Bye "<<S->getFirstName()<<" "<<S->getLastName()<<"!"<<endl;
//Student * Login(list <Student>  &StudentsList);

	return 0;
}


bool Interface::CheckPSW(Student *S,string Psw){

	if(S->getLogin_PSD()==Psw)
		return true;

	else
		return false;



}
void Interface::AvailableCourses(const char * FileName,Student * S){



    string Course_ID;
    string Title;
    string TeacherName;
    string Location;
    int NbrStudentsMax;
		int i=0;


ifstream ficin(FileName);


	while(!ficin.eof()){//while we didn't reach the end of the file
		ficin>>Course_ID;
		ficin>>Title;
		ficin>>TeacherName;
		ficin>>Location;
        ficin>>NbrStudentsMax;




	//we're going to create a object course that we're going to store in the list

		if(!S->CheckCourse( Course_ID)){
			Course C(Course_ID,Title,TeacherName,Location,NbrStudentsMax);
			cout<<i<<"- ";C.display();
			i++;

}//end if

		}//end whiles


cout<<"\n\n";


}

Student * Interface::Login(Student StudentsList[],int nbr){




cout<< "Hello , to login please fill your ID and your password:"<<endl;
string id,psw;

Student *S;
S=NULL;
int cpt=0;
while(S==NULL){
	if(cpt!=0)
		cout<<"You have entered the wrong ID please try again.\n";
	cout<<"ID:";
	cin>>id;
	S=CheckID( id,StudentsList,nbr);
	cpt++;
}


//Here S in non NULL
	cout<<"Enter your password please:\n";
	cin>>psw;
	while(!CheckPSW( S, psw)){//tant qu'on a pas saisi le bon mot de passe
        cout<<"You have entered the wrong password,please try again\n"<<endl;
		cout<<"password:";
        cin>>psw;

	}

	return S;}




void Interface::Home(Student *S,Student StudentsList[],int nbr){

 		choice=-1;//initialization
		cout<<"*************Hello "<<S->getFirstName()<<" "<<S->getLastName()<<", welcome in your personal space********************\n\n";

		cout<<"Please,choose an option \n\n";
		cout<<"1-Check Current Planning\n"<<endl;
		cout<<"2-Browse available Courses\n"<<endl;
		cout<<"3-Logout"<<endl;
			cin>>choice;

			switch(choice){

			case(1):
        {
        				S->DisplayListCours();
        				if(S->getnbr()!=0){
                        cout<<"\n\nDo you want to delete a course?\n\n";
                        cout<<"1-Delete Course\n\n";
                        cout<<"2-Home\n\n";
                        /************/
                    cin>>choix;
                    if(choix=="1"){
                            string CourseDelete;

                            while(!CheckCourse(CourseDelete)){
                            cout<<"Please enter a valid course ID to delete :>";
							cin>>CourseDelete;


                    }

                            if(CheckCourse(CourseDelete)){


                            Course C=ReadMap(CourseDelete);
							S->Delete(C);
                            StudentFileUpdating("Accounts.txt",StudentsList,nbr);
							Home(S,StudentsList,nbr);}
						}




                            if(choix=="2"){
							Home(S,StudentsList,nbr);


                            }

        				}//foin if

        				else
							Home(S,StudentsList,nbr);


                        /*********/


        }//fin case


			break;

			case(2):{
				//cout<<"The available courses are:\n";
				//
				if(S->getnbr()<NBR_COURS_MAX){
					cout<<"Please choose the course to add among:\n";
					AvailableCourses("Course.txt",S);
					cout<<"1-Logout\n\n";
					cout<<"2-Home\n\n";
                    cout<<"Please enter the ID of the course you want to add :>";
                    while(!CheckCourse(choix) && choix!="1" && choix!="0"){
                            cout<<"Please enter a valid course ID :>";
                            cin>>choix;



                    }
					if(choix=="1")
						Logout(S);
					if(choix=="2")
						Home(S,StudentsList,nbr);
					else {
                        if(CheckCourse(choix)){
                            S->AddCourse(ReadMap(choix),S->getnbr());
                            StudentFileUpdating("Accounts.txt",StudentsList,nbr);
                        Home(S,StudentsList,nbr);}


}


}

				else{
					cout<<"You have reached the maximum of courses please delete one or more!\n";
					cout<<"1-Delete a Course\n";
					cout<<"2-Go to home\n";


					cin>>choice;
					if(choice==1){
							cout<<"Enter the ID of the Course to delete among:\n\n ";
							S->DisplayListCours();
                            string CourseDelete;

 while(!CheckCourse(CourseDelete)){
                            cout<<"Please enter a valid course ID to delete :>";
							cin>>CourseDelete;


                    }

                        if(CheckCourse(CourseDelete)){


                            Course C=ReadMap(CourseDelete);
							S->Delete(C);
                            StudentFileUpdating("Accounts.txt",StudentsList,nbr);
							Home(S,StudentsList,nbr);}
						}
					if(choice==2){
						Home(S,StudentsList,nbr);
						}

}
	}
			break;

			case(3):

				Logout(S);



			break;


		}//end switch

}//end fonction

















