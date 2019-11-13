//
// Created by utec on 13/11/19.
//

#include "claseCirculo.h"

claseCirculo::claseCirculo(t_posicion x, t_posicion y, t_longitud radio): claseFigura(x,y,radio*2,radio*2) {

}

t_area claseCirculo::calcularArea() {
    return 3.1415*w*w/4;
}


