#include "entity.h"

class joueur : public DynamicEntity{
public:
    joueur(const Point& pos);
    virtual ~joueur() = default;
    int lifetime() const;
    void setDeath();
    bool estVivant() const override;
    Point position() const override;
protected:
    Point d_pos;
    bool d_alive;
    int d_lifetime;
};

// Avance avec diagonales
class joueurNormal : public joueur{
public:
    joueurNormal();
    void deplacement(const AireDeJeu& AdJ, int valeur) override;
}

// Avance sans diagonales
class joueurExpert : public joueur{
public:
    joueurExpert();
    void deplacement(const AireDeJeu& AdJ, int valeur) override;
};