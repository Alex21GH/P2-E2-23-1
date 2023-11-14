/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Registro.h
 * Author: Alexis
 *
 * Created on 13 de noviembre de 2023, 03:15 PM
 */

#ifndef REGISTRO_H
#define REGISTRO_H
#include <vector>
#include "Nota.h"

class Registro {
private:
    vector<class Nota> vregistro;
    void println(ofstream&,char);
public:
    void carga();
    void procesa();
    void muestra();
};

#endif /* REGISTRO_H */

