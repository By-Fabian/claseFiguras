//
// Created by utec on 13/11/19.
//

#ifndef FIGURAS_CLASECIRCULO_H
#define FIGURAS_CLASECIRCULO_H

#include "mischelanius.h"
#include "claseFigura.h"

class claseCirculo: public claseFigura {
public:
    claseCirculo(t_posicion x,t_posicion y,t_longitud radio);
    t_area calcularArea() override ;

};


#endif //FIGURAS_CLASECIRCULO_H
