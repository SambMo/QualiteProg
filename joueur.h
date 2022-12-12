#include "entity.h"

class joueur : public DynamicEntity{
public:
    joueur(const Point& pos);
    joueur(int x, int y);
    int lifetime() const ;
    void setDeath() ;
    bool estVivant()const;
    Point position() const ;


private:
    Point d_pos;
    bool d_alive;
    bool d_modeExpert;
    int d_lifetime;



};


