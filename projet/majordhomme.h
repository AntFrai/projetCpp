#ifndef MAJORDHOMME_H
#define MAJORDHOMME_H

#include "ennemi.h"

class Majordhomme : public Ennemi
{
private:

public:
    //Vision de 50 pixel par défaut
    Majordhomme(int,  QWidget*, int=0, int=0, int=50);
    virtual void seDeplacer();
};

#endif // MAJORDHOMME_H
