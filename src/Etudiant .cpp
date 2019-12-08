#include "Etudiant .h"
#include <iostream>
#include <string.h>
#include <malloc.h>
using namespace std;
/*
  Etudiant ();
        Etudiant (int,char*,int,float*);
        ~Etudiant ();
        Etudiant (const Etudiant &);


        void saisie();
        void afficher();
        float moyenne();
        bool admis();
        bool comparer(Etudiant&);


*/



//-------------------------
Etudiant ::Etudiant ()
{
    this->matricule=0;
    this->nbrNotes=0;
}


//--------------------------

Etudiant::Etudiant(int m,char* n,int nb)
{

   this->matricule=m;
  strcpy(this->nom,n);
    this->nbrNotes=nb;
   this->tabNotes=(float*)malloc(sizeof(float)*this->nbrNotes);


}


//------------------------------------

Etudiant ::~Etudiant ()
{
    delete [] tabNotes;

}

//-------------------------------------


Etudiant::Etudiant(const Etudiant& e)
{


this->nbrNotes=e.nbrNotes;
this->tabNotes=e.tabNotes;
this->matricule=e.matricule;
}


//--------------------------------------

void Etudiant::saisie()
{  float note=0;

    cout<<" Donner les notes de etudiant , "<<this->nom<<":\n";

for(int i=0;i<this->nbrNotes;)
{
      cin>>note;

    if(note>=0 && note<=20){
        this->tabNotes[i]=note;
        i++;
    }


}


}

//----------------------------------------------

void Etudiant::afficher()
{


cout<<"\n le matricule :"<<this->matricule<<"  nom  : "<<this->nom<<"\n les notes :";

for(int i=0;i<this->nbrNotes;i++)
{

  cout<<this->tabNotes[i]<<"\t";
}



}


//-----------------------------------------------


float Etudiant::moyenne()
{
   float moy=0;
   for(int i=0;i<this->nbrNotes;i++)
{
moy+=this->tabNotes[i];

}
moy=moy/this->nbrNotes;
return moy;
}

//----------------------------------------------


bool Etudiant::admis()
{

if(moyenne()>=10)
{
   return true;

}
else{

  return false;
}

}

//----------------------------------------------


bool Etudiant::comparer(Etudiant& e)
{
if(e.moyenne()==moyenne()){
    return true;
}
else{
    return false;
}

}
