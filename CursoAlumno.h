/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CursoAlumno.h
 * Author: Alexis
 *
 * Created on 13 de noviembre de 2023, 02:50 PM
 */

#ifndef CURSOALUMNO_H
#define CURSOALUMNO_H
#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
using namespace std;

class CursoAlumno {
private:
    int codigo;
    char *codcur;
    int ciclo;
    double creditos;
    int nota;
    int vez;
    
public:
    CursoAlumno();
    CursoAlumno(const CursoAlumno& orig);
    virtual ~CursoAlumno();
    void SetVez(int vez);
    int GetVez() const;
    void SetNota(int nota);
    int GetNota() const;
    void SetCreditos(double creditos);
    double GetCreditos() const;
    void SetCiclo(int ciclo);
    int GetCiclo() const;
    void SetCodcur(char*);
    void GetCodcur(char*) const;
    void SetCodigo(int codigo);
    int GetCodigo() const;
    
    void leePrimera(ifstream&);
    virtual void imprime(ofstream&);
    void operator =(const class CursoAlumno &orig);
    bool operator<(const class CursoAlumno &other);
    
//    virtual copiarDatos();
};

#endif /* CURSOALUMNO_H */

