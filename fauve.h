#include "entity.h"

struct Point{int x,y;}; //Temporaire, sera mis dans le "mainWindow"

class fauve : public entity{
public:
    virtual ~fauve() = default;
};

// Avance sans diagonales
class lion : public fauve{
public:
    lion(const Point& pos);
    void deplacement(const PointCardinal& posC) override;
    bool estVivant() override;
private:
    Point d_pos;
    bool d_alive;
};

// Avance avec diagonales
class tigre : public fauve{
public:
    tigre(const Point& pos);
    void deplacement(const PointCardinal& posC) override;
    bool estVivant() override;
private:
    Point d_pos;
    bool d_alive;
};
