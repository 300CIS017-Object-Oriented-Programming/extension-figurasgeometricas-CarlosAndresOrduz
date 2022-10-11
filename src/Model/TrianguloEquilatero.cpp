//
// Created by orduz on 11/10/2022.
//
#include "TrianguloEquilatero.h"

TrianguloEquilatero::TrianguloEquilatero() {
    lado = 0;
    nombreFigura = "TrianguloEquilatero";
}

TrianguloEquilatero::TrianguloEquilatero(float longitudLado, float longitudaltura):TrianguloEquilatero() {
    this->lado = longitudLado;
    this->altura = longitudaltura;
}

void TrianguloEquilatero::dibujarFigura() {
    cout << nombreFigura;
    cout <<"\n";
    int i;
    for (i = 1; i <= 6; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

float TrianguloEquilatero::calcularArea() {
    area = (lado * altura)/2;
    return area;
}

float TrianguloEquilatero::calcularPerimetro() {
    perimetro = lado * 3;
    return perimetro;
}