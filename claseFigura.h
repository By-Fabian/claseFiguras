//
// Created by utec on 13/11/19.
//

#ifndef FIGURAS_CLASEFIGURA_H
#define FIGURAS_CLASEFIGURA_H

#include "mischelanius.h"

class claseFigura {
protected:
    t_posicion x;
    t_posicion y;
    t_dimension w;
    t_dimension h;
public:
    claseFigura(t_posicion x,t_posicion y,t_dimension w,t_dimension h);
    virtual t_posicion getX();
    virtual t_posicion getY();
    virtual t_area calcularArea()=0;
};


#endif //FIGURAS_CLASEFIGURA_H
