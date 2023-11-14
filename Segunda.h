/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Segunda.h
 * Author: Alexis
 *
 * Created on 13 de noviembre de 2023, 03:12 PM
 */

#ifndef SEGUNDA_H
#define SEGUNDA_H

#include "CursoAlumno.h"


class Segunda : public CursoAlumno{
private:
    double creditos;
public:
    Segunda();
    Segunda(const Segunda& orig);
    virtual ~Segunda();
    void SetCreditos(double creditos);
    double GetCreditos() const;
    
//    void leePrimera(ifstream&)=0;
    void imprime(ofstream&);
};

#endif /* SEGUNDA_H */

