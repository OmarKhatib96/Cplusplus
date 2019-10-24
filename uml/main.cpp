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




int main(){
  Student  StudentsList[NBR_ETUDIANT_MAX];
  int NbrEtudiant;
  for (int i=0;i<NBR_ETUDIANT_MAX;i++)
        StudentsList[i].setLogin_ID("-1");
    Interface InterfaceUtilisateur;
   NbrEtudiant= InterfaceUtilisateur.StudentFileReading("Accounts.txt",StudentsList);

	Student *S=InterfaceUtilisateur.Login(StudentsList,NbrEtudiant);
	InterfaceUtilisateur.Home(S,StudentsList,NbrEtudiant);
}




