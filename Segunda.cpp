/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Segunda.cpp
 * Author: Alexis
 * 
 * Created on 13 de noviembre de 2023, 03:12 PM
 */

#include "Segunda.h"

Segunda::Segunda() {
}

Segunda::Segunda(const Segunda& orig) {
}

Segunda::~Segunda() {
}

void Segunda::SetCreditos(double creditos) {
    this->creditos = creditos;
}

double Segunda::GetCreditos() const {
    return creditos;
}

void Segunda::imprime(ofstream&arch){
    CursoAlumno::imprime(arch);
    arch<<endl;
}