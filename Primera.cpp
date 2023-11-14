/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Primera.cpp
 * Author: Alexis
 * 
 * Created on 13 de noviembre de 2023, 03:07 PM
 */

#include "Primera.h"

Primera::Primera() {
    codacceso = nullptr;
}

Primera::Primera(const Primera& orig) {
}

Primera::~Primera() {
    if(codacceso != nullptr) delete codacceso;
}

void Primera::SetCodacceso(char* cadena) {
    if(codacceso!=nullptr) delete codacceso;
    codacceso = new char[strlen(cadena)+1];
    strcpy(codacceso,cadena);
}

void Primera::GetCodacceso(char*cadena) const {
    if(codacceso==nullptr) cadena[0]=0;
    else strcpy(cadena,codacceso);
}

void Primera::leerPrimera(ifstream &arch){
    CursoAlumno::leePrimera(arch);
    // codalu + codcur
    int codalu = GetCodigo();
    char codcur[10];
    GetCodcur(codcur);
//    SetCodacceso(sprintf(codcur,"%d",codalu));
    SetCodacceso(codcur);
}

void Primera::setearCOdigoAcceso(){
    int codalu = GetCodigo();
    char codcur[10], scodacceso[20];
    GetCodcur(codcur);
    sprintf(scodacceso,"%d%s",codalu,codcur);
    SetCodacceso(scodacceso);
}

//void Primera::operator=(const class Primera &orig){
//    // De CursoAlumno
//    char codcur[10]; orig.GetCodcur(codcur);
//    this->SetCodcur(codcur);
//    this->SetCiclo(orig.GetCiclo());
//    this->SetCodigo(orig.GetCiclo());
//    this->SetNota(orig.GetNota());
//    this->SetCreditos(orig.GetCreditos());
//    this->SetVez(orig.GetVez());
//    // De Primera
//    codacceso = nullptr;
//    char codaccess[20]; orig.GetCodacceso(codaccess); 
//    this->SetCodacceso(codaccess);
//}

void Primera::imprime(ofstream&arch){
    CursoAlumno::imprime(arch);
    int codalu = GetCodigo();
    char codcur[10], scodacceso[20];
    GetCodcur(codcur);
    sprintf(scodacceso,"%d%s",codalu,codcur);
    SetCodacceso(scodacceso);
    arch<<"    "<<left<<setw(20)<<codacceso;
    arch<<endl;
}

