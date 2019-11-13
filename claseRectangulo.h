//
// Created by utec on 13/11/19.
//

#ifndef FIGURAS_CLASERECTANGULO_H
#define FIGURAS_CLASERECTANGULO_H

#include "claseFigura.h"
#include "mischelanius.h"

class claseRectangulo: public claseFigura {
public:
    claseRectangulo(t_posicion x,t_posicion y,t_dimension w,t_dimension h);
    t_area calcularArea() override ;
};


#endif //FIGURAS_CLASERECTANGULO_H
