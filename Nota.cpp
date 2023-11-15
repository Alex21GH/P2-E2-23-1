/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nota.cpp
 * Author: Alexis
 * 
 * Created on 13 de noviembre de 2023, 03:14 PM
 */

#include "Nota.h"
#include "Primera.h"


Nota::Nota() {
    pnota = nullptr;
}

Nota::Nota(const Nota& orig) {
    pnota = nullptr;
    
    CursoAlumno *aux = orig.pnota;
    (*pnota) = (*aux);
}

void Nota::operator=(const Nota& orig){
    *(this->pnota) = *(orig.pnota);
//    this->pnota = new Primera;
//    *(this->pnota) = orig.pnota;
}

Nota::~Nota() {
//    if(pnota!=nullptr) delete pnota;
}

void Nota::leerPrimera(ifstream &arch){
    pnota = new class Primera;
    pnota->leePrimera(arch);
//    if(arch.eof()) return;
    
}

void Nota::imprimirNota(ofstream &arch){
    pnota->imprime(arch);
}

bool Nota::operator<(const class Nota &other){
    return *pnota < *(other.pnota);
    
    
//    char cod1[20],cod2[20];    
//    
//    if(pnota->GetCodigo() != other.pnota->GetCodigo()){
//        return pnota->GetCodigo() < other.pnota->GetCodigo();
//    }else{
//        pnota->GetCodcur(cod1); other.pnota->GetCodcur(cod2);
//        if(strcmp(cod1,cod2)!=0){
//            return strcmp(cod1,cod2);
//        }else{
//            return pnota->GetCiclo() < other.pnota->GetCiclo();
//        }                
//    }
}