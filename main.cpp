#include <iostream>
#include "mischelanius.h"
#include "claseFigura.h"
#include "claseCirculo.h"
#include "claseRectangulo.h"

using namespace std;

t_area calcular_diferncia_area(claseFigura* f1, claseFigura* f2){
    return f1->calcularArea()-f2->calcularArea();

}

int main() {
    claseCirculo c1 (10,10,40);
    claseRectangulo r1 (80,80,20,30);

    vector<claseFigura*> vectorfigura = {&c1,&r1};

    for (auto f : vectorfigura){
        cout<<"El area es: "<<f->calcularArea()<<endl;
    }



    return 0;
}