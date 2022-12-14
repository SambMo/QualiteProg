#include "fauve.h"
#include "joueur.h"
#include "piege.h"
#include <iostream>
#include <vector>

bool gameOver = true;;
bool menu = true;

while (menu)
{
    std::string valeur;
    cout<<"Saisissez ce que vous voulez faire: "
    std::cin>>valeur;
    switch(valeur)
    {
        case "Jouer" : jouer(); break; 
    }
}
    
void jouer()
{
    std::vector<std::vector<int>> AireDeJeu;
    joueur j;
    std::vector<fauve> fauves;
    initAireDeJeu(AdJ);
    while (!gameOver && !fauve[i].empty())
    {
        SaisieDeplacement();
        j.deplacement(valeur);
        for(int i=0;i<fauves.size();++i)
        {
            D.changeDeplacement();
            fauves[i].deplacement(AireDeJeu,D);
        }
    }

}

void Saisiedeplacement()
{
    int valeur = 0;
    while(valeur<1 || valeur>9)
    {
        cout<<"envoyez la valeur de deplacement: ";
        cin>>valeur;
    }   
}


