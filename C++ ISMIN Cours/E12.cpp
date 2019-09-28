#include <iostream>
#include <fstream>
using namespace  std;
#include <vector>
#include <map>
#include <algorithm>



	enum BOOL{ESP,RET};


class Personne{

private:
string nom;
int age;


public:

 Personne(string N,int A){

	nom=N;
	age=A;



}

string getNom(void){

return nom;

}

int getAge(void){

return age;}


 Personne(void){


}

void Affichage(void)const{
	cout<<"Cette personne s'appelle"<<" "<<nom<<" et a "<<age<<" ans\n";


}



};

bool Montri(Personne &P1,Personne &P2);
void TriVector(vector <Personne>&V);
void AfficherVectorPersonnes(vector <Personne> &V,map <string,int>&M);
void TriVectorParNom(vector <Personne>&V);
bool Montri2(Personne &P1,Personne &P2);
void PremierPlusPetit(vector<string> &S,int N);
void LectureFichier(void){

ifstream ficin("fichier.txt");
string nom;
int age;
 map <string,int> personne;
typedef vector <Personne> vec;//vector which will store int values;
vec V;//pas la peine de préciser la taille

	while(!ficin.eof()){
		//On crée un objet personne avec le constructeur
		ficin>>nom;//lecture des donnée du fichier
		ficin>>age;
		Personne P(nom,age);
		V.push_back(P);
		personne.insert(make_pair(P.getNom(),P.getAge()));//on a inséré  cold coffee
	
}



AfficherVectorPersonnes( V,personne);
TriVector(V);
AfficherVectorPersonnes( V,personne);
TriVectorParNom(V);
AfficherVectorPersonnes( V,personne);

}

void CountVector(vector<string> &S);


void AfficherVectorPersonnes(vector <Personne> &V,map <string,int>&M){

cout<<"Affichage avec vector:\n";
vector <Personne>::iterator it=V.begin();
//iterator looks like an upgraded version of pointers
//on commence a it=vec.begin();
while(it!=V.end()){
(*it).Affichage();//Attention fair (*it) pas *.it.
//si j'écrit it++ , il va pointer à l'élement suivant 60,On peut pas faire ça avec les pointeurs
it++;
}

cout<<"\nAffichage avec map:\n";

map<string,int>::iterator it2=M.begin();//we just create an iterator  corresponding to our first coffee element

for(it2=M.begin();it2!=M.end();it2++){

	cout<<it2->first<<" : "<<it2->second<<endl;//it->first represents all the keys ,it->second represents all the values

}//this
}


bool Montri(Personne &P1,Personne &P2){
		return P1.getAge()<P2.getAge();
	

}

bool Montri2(Personne &P1,Personne &P2){

		return P1.getNom()<P2.getNom();

}

bool Montri3(string &S1,string &S2){

		return S1<S2;

}

bool Montri4(string &S1,string &S2){

		return S1.size()<S2.size();

}



void TriVector(vector <Personne>&V){

sort(V.begin(),V.end(),Montri);


}

//functor AFF(ESP)
class Aff{


private:
BOOL b;


public:Aff(BOOL B):b(B){}
	

	void operator()(string S)const{
		
		switch(b){
		case ESP:{cout<<S<<" ";break;}
		case RET:{cout<<S<<"\n";break;}
	}

}

};





void AfficherVector(vector <string> &S){


for_each(S.begin(),S.end(),Aff(RET));

}


void TriVectorParNom(vector <Personne>&V){

sort(V.begin(),V.end(),Montri2);






}

void LectureFichier2(void){

ifstream ficin2("chaine.txt");
string nom;
typedef vector <string> vec2;//vector which will store int values;
vec2 V2;//pas la peine de préciser la taille

	while(!ficin2.eof()){

		ficin2>>nom;//lecture des donnée du fichier

		V2.push_back(nom);
}

 AfficherVector(V2);
sort(V2.begin(),V2.end(),Montri3);
sort(V2.begin(),V2.end(),Montri4);
 CountVector(V2);
 PremierPlusPetit(V2,3);
}


bool MoinsdeN(string S){
	return S.size()<7;

}

void CountVector(vector<string> &S){

vector <string>::iterator it=S.begin();
//iterator looks like an upgraded version of pointers
//on commence a it=vec.begin();
while(it!=S.end()){
//Attention fair (*it) pas *.it.
//si j'écrit it++ , il va pointer à l'élement suivant 60,On peut pas faire ça avec les pointeurs
int mycount(count(S.begin(),S.end(),*it));

	cout<<(*it)<<" "<<mycount<<" fois\n";

it++;//il faut mettre it++,sinon c'est boucle infinie




}

int mycount=count_if(S.begin(),S.end(),MoinsdeN);
	cout<<mycount;

}

void PremierPlusPetit(vector<string> &S,int N){
bool trouve=false;
vector <string>::iterator it=S.begin();
while(it!=S.end() || trouve!=true){
if((*it).size()<=N){
	cout<<"\nLe premier mot moins de "<<N<<" éléments est "<<(*it)<<endl;
	trouve=true;
}
}
	if(trouve==false)
		cout<<"\nIl n'y a aucun mot moins de "<<N<<" éléments\n";
}
int main(){

LectureFichier();	
LectureFichier2();



}








	
