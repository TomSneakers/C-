#include <iostream>
#include <string>

using namespace std;

char tictactoe[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

void affichermorpion()
{
    cout << "Voici le jeu actuel :\n\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << tictactoe[i][j] << " ";
        }
        cout << endl;
    }
}

void prendreentree(char choix, char joueur)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (choix == tictactoe[i][j])
            {
                tictactoe[i][j] = joueur;
                return;
            }
        }
    }

    cout << "Votre choix est invalide\n";
}

char gagnant()
{
    // Lignes horizontales
    if (tictactoe[0][0] == tictactoe[0][1] && tictactoe[0][1] == tictactoe[0][2])
        return tictactoe[0][0];
    if (tictactoe[1][0] == tictactoe[1][1] && tictactoe[1][1] == tictactoe[1][2])
        return tictactoe[1][0];
    if (tictactoe[2][0] == tictactoe[2][1] && tictactoe[2][1] == tictactoe[2][2])
        return tictactoe[2][0];

    // Lignes verticales
    if (tictactoe[0][0] == tictactoe[1][0] && tictactoe[1][0] == tictactoe[2][0])
        return tictactoe[0][0];
    if (tictactoe[0][1] == tictactoe[1][1] && tictactoe[1][1] == tictactoe[2][1])
        return tictactoe[1][0];
    if (tictactoe[0][2] == tictactoe[1][2] && tictactoe[1][2] == tictactoe[2][2])
        return tictactoe[0][2];

    // Lignes diagonales
    if (tictactoe[0][0] == tictactoe[1][1] && tictactoe[1][1] == tictactoe[2][2])
        return tictactoe[0][0];
    if (tictactoe[2][0] == tictactoe[1][1] && tictactoe[1][1] == tictactoe[0][2])
        return tictactoe[2][0];

    return '/';
}

void arreterProgramme()
{
    string choix;
    cout << "Entrez 'exit' pour quitter le programme : ";
    cin >> choix;

    if (choix == "exit")
    {
        cout << "Programme arrêté.\n";
        exit(0);
    }
}

int main()
{
    string choix;
    int joueur = 1;
    char joueursigne;
    char gagnant_ = gagnant();

    do
    {
        affichermorpion();
        joueur = (joueur % 2) ? 1 : 2;

        cout << "Joueur " << joueur << ", choisissez votre case : ";
        cin >> choix;

        if (choix == "exit") // Vérifier si l'entrée est "exit"
        {
            arreterProgramme();
            continue; // Ignorer le reste du code de cette itération de la boucle
        }

        joueursigne = (joueur == 1) ? 'X' : 'O';
        prendreentree(choix[0], joueursigne);
        joueur++;

        gagnant_ = gagnant();

        if (gagnant_ == 'X')
            cout << "Le joueur 1 a gagné !" << endl;
        else if (gagnant_ == 'O')
            cout << "Le joueur 2 a gagné !" << endl;
        else if (gagnant_ == '/' && joueur > 9)
            cout << "Match nul !" << endl;

    } while (gagnant_ == '/' && joueur < 10);

    if (gagnant_ == 'X' || gagnant_ == 'O')
        affichermorpion();

    return 0;
}
