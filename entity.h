struct PointCardinal{bool haut,bas,gauche,droite;}; //Temporaire, sera mis dans le "mainWindow"

class entity{
public:
    virtual ~entity() = default;
    virtual void deplacement(const PointCardinal& posC) = 0;
    virtual bool estVivant() = 0;
};