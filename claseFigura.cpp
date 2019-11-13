//
// Created by utec on 13/11/19.
//

#include "claseFigura.h"

claseFigura::claseFigura(t_posicion x, t_posicion y, t_dimension w, t_dimension h):
    x{x},y{y},w{w},h{h}
    {}

t_posicion claseFigura::getX() {
    return x;
}

t_posicion claseFigura::getY() {
    return y;
}

