#include <iostream>
#include "Etudiant .h"

using namespace std;

int main()
{
    Etudiant e(1,"younes",3);
    Etudiant e2(2,"amine",3);
    Etudiant e3(e);

    e.saisie();
    e2.saisie();

    e.afficher();


    if(e.admis())
    {
       cout <<"\tAdmis !\n";
    }
    else{
        cout<<"\t n est pas Admis !\n";
    }

    e2.afficher();

     if(e2.admis())
    {
       cout <<"\tAdmis !\n";
    }
    else{
        cout<<"\t n est pas Admis !\n";
    }
    e3.afficher();
    cout<<"copie\n";
     if(e3.admis())
    {
       cout <<"\tAdmis !\n";
    }
    else{
        cout<<"\t n est pas Admis !\n";
    }

   if(e.comparer(e3)){

    cout<<"\nla meme moyenne !\n";
   }
   else{
      cout<<"\ndefferente moyenne !\n";
   }

    return 0;
}
