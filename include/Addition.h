#ifndef ADDITION_H
#define ADDITION_H

#include "Operation.h"

class Addition: public Operation
{
    public:
        Addition(Expression *gauche, Expression *droite);

        void afficher() const;
        void afficherNpi() const;
        float calculer() const;
};

#endif // ADDITION_H
