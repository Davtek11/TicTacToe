#include <iostream>
using namespace std;

void afficherJeu (int caseA1, int caseA2, int caseA3,
                  int caseB1, int caseB2, int caseB3,
                  int caseC1, int caseC2, int caseC3)
{

    char A1, A2, A3, B1, B2, B3, C1, C2, C3;

    if  (caseA1 == 0)
    {
        A1 = ' ';
    }
    else if(caseA1 == 1)
    {
        A1 = 'X';
    }
    else
    {
        A1 = '0';
    }
    if  (caseA1 == 0)
    {
        A1 = ' ';
    }
    else if(caseA1 == 1)
    {
        A1 = 'X';
    }
    else
    {
        A1 = '0';
    }
    if  (caseA2 == 0)
    {
        A2 = ' ';
    }
    else if(caseA2 == 1)
    {
        A2 = 'X';
    }
    else
    {
        A2 = '0';
    }
    if  (caseA3 == 0)
    {
        A3 = ' ';
    }
    else if(caseA3 == 1)
    {
        A3 = 'X';
    }
    else
    {
        A3 = '0';
    }
    if  (caseB1 == 0)
    {
        B1 = ' ';
    }
    else if(caseB1 == 1)
    {
        B1 = 'X';
    }
    else
    {
        B1 = '0';
    }
    if  (caseB2 == 0)
    {
        B2 = ' ';
    }
    else if(caseB2 == 1)
    {
        B2 = 'X';
    }
    else
    {
        B2 = '0';
    }
    if  (caseB3 == 0)
    {
        B3 = ' ';
    }
    else if(caseB3 == 1)
    {
        B3 = 'X';
    }
    else
    {
        B3 = '0';
    }
    if  (caseC1 == 0)
    {
        C1 = ' ';
    }
    else if(caseC1 == 1)
    {
        C1 = 'X';
    }
    else
    {
        C1 = '0';
    }
    if  (caseC2 == 0)
    {
        C2 = ' ';
    }
    else if(caseC2 == 1)
    {
        C2 = 'X';
    }
    else
    {
        C2 = '0';
    }
    if  (caseC3 == 0)
    {
        C3 = ' ';
    }
    else if(caseC3 == 1)
    {
        C3 = 'X';
    }
    else
    {
        C3 = '0';
    }

    cout << " " << A1 << " | " << A2 << " | " << A3 << " " << endl
        << "---|---|---" << endl
        << " " << B1 << " | " << B2 << " | " << B3 << " " << endl
        << "---|---|---" << endl
        << " " << C1 << " | " << C2 << " | " << C3 << " " << endl;
}



void victoire(bool& jeu,int& caseA1, int& caseA2, int& caseA3, int& caseB1, int& caseB2, int& caseB3, int& caseC1, int& caseC2, int& caseC3) {
/*Conditions de victoires*/
    ///////Cas 1
    if (caseA1 == caseA2 and caseA1 == caseA3 and caseA1 !=0)
    {
        if (caseA1 == 1)
        {
            cout << "Joueur 1 a gagne" << endl;
            jeu = false;
        }
        else
        {
            cout << "Joueur 2 a gagne" << endl;
            jeu = false;
        }

    }
    //////////Cas 2
    if (caseB1 == caseB2 and caseB1 == caseB3 and caseB1 !=0)
    {
        if (caseB1 == 1)
        {
            cout << "Joueur 1 a gagne" << endl;
            jeu = false;
        }
        else
        {
            cout << "Joueur 2 a gagne" << endl;
            jeu = false;
        }

    }
    //////////Cas 3
    if (caseC1 == caseC2 and caseC1 == caseC3 and caseC1 !=0)
    {
        if (caseC1 == 1)
        {
            cout << "Joueur 1 a gagne" << endl;
            jeu = false;
        }
        else
        {
            cout << "Joueur 2 a gagne" << endl;
            jeu = false;
        }

    }
    //////////Cas 4
    if (caseA1 == caseB1 and caseA1 == caseC1 and caseA1 !=0)
    {
        if (caseA1 == 1)
        {
            cout << "Joueur 1 a gagne" << endl;
            jeu = false;
        }
        else
        {
            cout << "Joueur 2 a gagne" << endl;
            jeu = false;
        }

    }
    //////////Cas 5
    if (caseA2 == caseB2 and caseA2 == caseC2 and caseA2 !=0)
    {
        if (caseA2 == 1)
        {
            cout << "Joueur 1 a gagne" << endl;
            jeu = false;
        }
        else
        {
            cout << "Joueur 2 a gagne" << endl;
            jeu = false;
        }

    }
    //////////Cas 6
    if (caseA3 == caseB3 and caseA3 == caseC3 and caseA3 !=0)
    {
        if (caseA3 == 1)
        {
            cout << "Joueur 1 a gagne" << endl;
            jeu = false;
        }
        else
        {
            cout << "Joueur 2 a gagne" << endl;
            jeu = false;
        }

    }
    //////////Cas 7
    if (caseA1 == caseB2 and caseA1 == caseC3 and caseA1 !=0)
    {
        if (caseA1 == 1)
        {
            cout << "Joueur 1 a gagne" << endl;
            jeu = false;
        }
        else
        {
            cout << "Joueur 2 a gagne" << endl;
            jeu = false;
        }

    }
    //////////Cas 8
    if (caseA3 == caseB2 and caseA3 == caseC1 and caseA3 !=0)
    {
        if (caseA3 == 1)
        {
            cout << "Joueur 1 a gagne" << endl;
            jeu = false;
        }

        else
        {
            cout << "Joueur 2 a gagne" << endl;
            jeu = false;
        }

    }
}



int main() {
/* Choix des cases pour joueur 1 et 2 */
    int caseA1 = 0, caseA2 = 0, caseA3 = 0,
        caseB1 = 0, caseB2 = 0, caseB3 = 0,
        caseC1 = 0, caseC2 = 0, caseC3 = 0;

    int joueur = 1;
    bool jeu = true;



    cout << "TicTacToe!" << endl;



    string caseChoisie;

    while (jeu == true)
    {

        if (joueur == 1) {

            afficherJeu(caseA1, caseA2, caseA3, caseB1, caseB2, caseB3, caseA3, caseB3, caseC3);
            victoire(jeu ,caseA1, caseA2, caseA3, caseB1, caseB2, caseB3, caseA3, caseB3, caseC3);
            cout << "Joueur 1 : Quelle case voulez vous jouer ? (ex : A1)" << endl;


    getline(cin, caseChoisie);

    if (caseChoisie == "A1") {
        caseA1 = 1;
    }
    if (caseChoisie == "A2") {
        caseA2 = 1;
    }
    if (caseChoisie == "A3") {
        caseA3 = 1;
    }
    if (caseChoisie == "B1") {
        caseB1 = 1;
    }
    if (caseChoisie == "B2") {
        caseB2 = 1;
    }
    if (caseChoisie == "B3") {
        caseB3 = 1;
    }
    if (caseChoisie == "C1") {
        caseC1 = 1;
    }
    if (caseChoisie == "C2") {
        caseC2 = 1;
    }
    if (caseChoisie == "C3") {
        caseC3 = 1;
    }

            cout << "Case selectionnee : " + caseChoisie << endl;


            joueur = 2;
        }

        if (joueur == 2) {

            afficherJeu(caseA1, caseA2, caseA3, caseB1, caseB2, caseB3, caseA3, caseB3, caseC3);
            victoire(jeu, caseA1, caseA2, caseA3, caseB1, caseB2, caseB3, caseA3, caseB3, caseC3);
            cout << "Joueur 2 : Quelle case voulez vous jouer ? (ex : A1)" << endl;

            getline(cin, caseChoisie);

            if (caseChoisie == "A1") {
                caseA1 = 2;
            }
            if (caseChoisie == "A2") {
                caseA2 = 2;
            }
            if (caseChoisie == "A3") {
                caseA3 = 2;
            }
            if (caseChoisie == "B1") {
                caseB1 = 2;
            }
            if (caseChoisie == "B2") {
                caseB2 = 2;
            }
            if (caseChoisie == "B3") {
                caseB3 = 2;
            }
            if (caseChoisie == "C1") {
                caseC1 = 2;
            }
            if (caseChoisie == "C2") {
                caseC2 = 2;
            }
            if (caseChoisie == "C3") {
                caseC3 = 2;
            }

            cout << "Case selectionnee : " + caseChoisie << endl;

            joueur = 1;
        }
    }



    return 0;
}


