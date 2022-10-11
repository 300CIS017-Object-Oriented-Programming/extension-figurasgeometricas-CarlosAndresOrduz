//
// Created by orduz on 11/10/2022.
//

#ifndef EJERCICIO_POLIMORFISMO_TRIANGULO_H
#define EJERCICIO_POLIMORFISMO_TRIANGULO_H

#include <iostream>
#include "FiguraGeometrica.h"

using std::cin;
using std::cout;

class TrianguloEquilatero: public FiguraGeometrica{
private:
    float lado;
    float altura;
public:
    TrianguloEquilatero();
    TrianguloEquilatero(float longitudLado, float longitudaltura);
    virtual ~TrianguloEquilatero() = default;

    void dibujarFigura() override;
    float calcularArea() override;
    float calcularPerimetro() override;
};

#endif //EJERCICIO_POLIMORFISMO_TRIANGULO_H
