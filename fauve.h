#include "entity.h"

class fauve : public DynamicEntity{
public:
    virtual ~fauve() = default;
    Point position() const override;
    bool estVivant() const override;
protected:
    Point d_pos;
    bool d_alive;
};

// Avance sans diagonales
class lion : public fauve{
public:
    lion();
    void deplacement(const AireDeJeu& AdJ) override;
};

// Avance avec diagonales
class tigre : public fauve{
public:
    tigre();
    void deplacement(const AireDeJeu& AdJ) override;
};
