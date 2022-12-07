#include "entity.h"

struct Point{int x,y;}; //Temporaire, sera mis dans le "mainWindow"

class joueur : public entity{
public:
    virtual ~joueur() = default;
    virtual int lifetime() = 0;
};

// Avance avec diagonales
class joueurNormal : public joueur{
public:
    joueurNormal(const Point& pos);
    joueurNormal(int x, int y);
    void deplacement(const PointCardinal& posC) override;
    bool estVivant() override;
    int lifetime() override;
private:
    Point d_pos;
    bool d_alive;
    int d_lifetime;
};

// Avance sans diagonales
class joueurExpert : public joueur{
public:
    joueurExpert(const Point& pos);
    joueurExpert(int x, int y);
    void deplacement(const PointCardinal& posC) override;
    bool estVivant() override;
    int lifetime() override;
private:
    Point d_pos;
    bool d_alive;
    int d_lifetime;
};