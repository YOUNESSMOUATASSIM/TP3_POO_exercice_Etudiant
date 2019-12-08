#ifndef ETUDIANT_H
#define ETUDIANT_H


class Etudiant
{

    private:
        int matricule;
        char nom[20];
        int nbrNotes;
        float *tabNotes;



    public:
        Etudiant ();
        Etudiant (int,char*,int);
        ~Etudiant ();
        Etudiant (const Etudiant &);


        void saisie();
        void afficher();
        float moyenne();
        bool admis();
        bool comparer(Etudiant&);



};

#endif // ETUDIANT _H
