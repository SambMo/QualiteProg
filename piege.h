#include "entity.h"

class piege : public StaticEntity
{
public:
    virtual ~piege() = default;
};

class piegeAPic : public piege
{
public:
    piegeAPic();
    Point position() const override;
    bool estActif() const override;
    void increaseEmpile();
private:
    Point d_pos;
    bool d_actif;
    int d_empile;
}