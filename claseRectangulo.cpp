//
// Created by utec on 13/11/19.
//

#include "claseRectangulo.h"

claseRectangulo::claseRectangulo(t_posicion x, t_posicion y, t_dimension w, t_dimension h):
    claseFigura(x, y, w, h)
    {}

t_area claseRectangulo::calcularArea() {
    return w*h;
}
