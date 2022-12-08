
struct Point{int x,y;}; //Temporaire, sera mis dans le "mainWindow"
struct PointCardinal{bool haut,bas,gauche,droite;}; //Temporaire, sera mis dans le "mainWindow"

class Entity{
public:
    virtual ~DynamicEntity() = default;
    virtual Point position() const = 0;
}

class DynamicEntity : public Entity{
public:
    virtual ~DynamicEntity() = default;
    virtual void deplacement(const PointCardinal& posC) = 0;
    virtual bool estVivant() = 0;
};

class StaticEntity : public Entity{
public:
    virtual ~StaticEntity() = default;
    virtual bool estActif() = 0;
};