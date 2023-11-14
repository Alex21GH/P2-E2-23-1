/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tercera.h
 * Author: Alexis
 *
 * Created on 13 de noviembre de 2023, 03:13 PM
 */

#ifndef TERCERA_H
#define TERCERA_H

#include "CursoAlumno.h"


class Tercera : public CursoAlumno{
private:
    double porcentaje;
public:
    Tercera();
    Tercera(const Tercera& orig);
    virtual ~Tercera();
    void SetPorcentaje(double porcentaje);
    double GetPorcentaje() const;
    
//    void leePrimera(ifstream&)=0;
    void imprime(ofstream&);
    
};

#endif /* TERCERA_H */

