/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tercera.cpp
 * Author: Alexis
 * 
 * Created on 13 de noviembre de 2023, 03:13 PM
 */

#include "Tercera.h"

Tercera::Tercera() {
}

Tercera::Tercera(const Tercera& orig) {
}

Tercera::~Tercera() {
}

void Tercera::SetPorcentaje(double porcentaje) {
    this->porcentaje = porcentaje;
}

double Tercera::GetPorcentaje() const {
    return porcentaje;
}

void Tercera::imprime(ofstream&arch){
    CursoAlumno::imprime(arch);
    arch<<endl;
}