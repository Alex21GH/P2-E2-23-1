/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nota.h
 * Author: Alexis
 *
 * Created on 13 de noviembre de 2023, 03:14 PM
 */

#ifndef NOTA_H
#define NOTA_H

#include "CursoAlumno.h"


class Nota {
private:
    class CursoAlumno *pnota;
public:
    Nota();
    Nota(const Nota& orig);
    virtual ~Nota();
    
    void operator=(const Nota& orig);
    void leerPrimera(ifstream &);
    void imprimirNota(ofstream &);
    bool operator<(const class Nota &);
};

#endif /* NOTA_H */

