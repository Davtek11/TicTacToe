#include <iostream>
using namespace std;


string victoire(int caseA1, int caseA2, int caseA3, int caseB1, int caseB2, int caseB3, int caseC1, int caseC2, int caseC3) {

    ///////Cas 1
    if (caseA1 == caseA2 and caseA1 == caseA3 and caseA1 !=0)
    {
        if (caseA1 == 1)
        {
            cout << "Joueur 1 a gagne" << endl;
        }
        else
        {
            cout << "Joueur 2 a gagne" << endl;
        }

    }
    //////////Cas 2
    if (caseB1 == caseB2 and caseB1 == caseB3 and caseB1 !=0)
    {
        if (caseB1 == 1)
        {
            cout << "Joueur 1 a gagne" << endl;
        }
        else
        {
            cout << "Joueur 2 a gagne" << endl;
        }

    }
    //////////Cas 3
    if (caseC1 == caseC2 and caseC1 == caseC3 and caseC1 !=0)
    {
        if (caseC1 == 1)
        {
            cout << "Joueur 1 a gagne" << endl;
        }
        else
        {
            cout << "Joueur 2 a gagne" << endl;
        }

    }
    //////////Cas 4
    if (caseA1 == caseB1 and caseA1 == caseC1 and caseA1 !=0)
    {
        if (caseA1 == 1)
        {
            cout << "Joueur 1 a gagne" << endl;
        }
        else
        {
            cout << "Joueur 2 a gagne" << endl;
        }

    }
    //////////Cas 5
    if (caseA2 == caseB2 and caseA2 == caseC2 and caseA2 !=0)
    {
        if (caseA2 == 1)
        {
            cout << "Joueur 1 a gagne" << endl;
        }
        else
        {
            cout << "Joueur 2 a gagne" << endl;
        }

    }
    //////////Cas 6
    if (caseA3 == caseB3 and caseA3 == caseC3 and caseA3 !=0)
    {
        if (caseA3 == 1)
        {
            cout << "Joueur 1 a gagne" << endl;
        }
        else
        {
            cout << "Joueur 2 a gagne" << endl;
        }

    }
    //////////Cas 7
    if (caseA1 == caseB2 and caseA1 == caseC3 and caseA1 !=0)
    {
        if (caseA1 == 1)
        {
            cout << "Joueur 1 a gagne" << endl;
        }
        else
        {
            cout << "Joueur 2 a gagne" << endl;
        }

    }
    //////////Cas 8
    if (caseA3 == caseB2 and caseA3 == caseC1 and caseA3 !=0)
    {
        if (caseA3 == 1)
        {
            cout << "Joueur 1 a gagne" << endl;
        }

        else
        {
            cout << "Joueur 2 a gagne" << endl;
        }

    }

}


int main() {

    int caseA1 = 0, caseA2 = 0, caseA3 = 0,
        caseB1 = 0, caseB2 = 0, caseB3 = 0,
        caseC1 = 0, caseC2 = 0, caseC3 = 0;

    int joueur = 1;
    bool jeu = true;



    cout << "TicTacToe!" << endl;

    victoire(caseA1, caseA2, caseA3, caseB1, caseB2, caseB3, caseA3, caseB3, caseC3);

    string caseChoisie;

    while (jeu == true)
    {

        if (joueur == 1) {

            cout << "Joueur 1 : Quelle case voulez vous jouer ? (ex : A1)" << endl;


    getline(cin, caseChoisie);

    if (caseChoisie == "A1") {
        caseA1 = 1;
        cout << "A1 : " << caseA1;
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

            cout << "Joueur 2 : Quelle case voulez vous jouer ? (ex : A1)" << endl;

            getline(cin, caseChoisie;

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
