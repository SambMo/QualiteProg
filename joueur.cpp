#include "joueur.h"

////////////////////////////joueur\\\\\\\\\\\\\\\\\\\\\\\\\\\

joueur::joueur(const Point &pos): d_pos{pos}, d_alive{true}, d_lifetime{0}
{

}

joueur::joueur(int x, int y): d_pos{x,y},d_alive{true},d_lifetime{0}
{

}

bool joueur::estVivant() const
{
    return d_alive;
}

int joueur::lifetime() const
{
    return d_lifetime;
}

Point joueur::position() const
{
    return d_pos;
}

void joueur::setDeath()
{
    d_alive=false;
}

