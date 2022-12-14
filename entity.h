#include <vector>

struct Point{int x,y;}; //Temporaire, sera mis dans le "mainWindow"

class Entity{
public:
    virtual ~Entity() = default;
    virtual Point position() const = 0;
};

class DynamicEntity : public Entity{
public:
    virtual ~DynamicEntity() = default;
    virtual void deplacement(const AireDeJeu& AdJ) = 0;
    virtual void deplacement(const AireDeJeu& AdJ, int valeur) = 0;
    virtual bool estVivant() const = 0;
};

class StaticEntity : public Entity{
public:
    virtual ~StaticEntity() = default;
    virtual bool estActif() const = 0;
};