/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CursoAlumno.cpp
 * Author: Alexis
 * 
 * Created on 13 de noviembre de 2023, 02:50 PM
 */

#include "CursoAlumno.h"

CursoAlumno::CursoAlumno() {
    codcur = nullptr;
    codigo = 0;
}

CursoAlumno::CursoAlumno(const CursoAlumno& orig) {
    codcur = nullptr;
    (*this) = orig;    
}

CursoAlumno::~CursoAlumno() {
    if(codcur!=nullptr) delete codcur;
}

void CursoAlumno::SetVez(int vez) {
    this->vez = vez;
}

int CursoAlumno::GetVez() const {
    return vez;
}

void CursoAlumno::SetNota(int nota) {
    this->nota = nota;
}

int CursoAlumno::GetNota() const {
    return nota;
}

void CursoAlumno::SetCreditos(double creditos) {
    this->creditos = creditos;
}

double CursoAlumno::GetCreditos() const {
    return creditos;
}

void CursoAlumno::SetCiclo(int ciclo) {
    this->ciclo = ciclo;
}

int CursoAlumno::GetCiclo() const {
    return ciclo;
}

void CursoAlumno::SetCodcur(char* cadena) {
    if(codcur!=nullptr) delete codcur;
    codcur = new char[strlen(cadena)+1];
    strcpy(codcur,cadena);
}

void CursoAlumno::GetCodcur(char* cadena) const {
    if(codcur==nullptr) cadena[0]=0;
    else strcpy(cadena,codcur);
}

void CursoAlumno::SetCodigo(int codigo) {
    this->codigo = codigo;
}

int CursoAlumno::GetCodigo() const {
    return codigo;
}

void CursoAlumno::leePrimera(ifstream&arch){
    int codalu, nota, ciclo;
    double creditos;
    char codcur[10], c;
    
    arch>>codalu;
    if(arch.eof()) return;
    arch.get();
    arch.getline(codcur,10,',');
    arch>>creditos>>c>>ciclo>>c>>nota;
    
    SetCodigo(codalu);
    SetCiclo(ciclo);
    SetNota(nota);
    SetVez(1);
    SetCodcur(codcur);
    SetCreditos(creditos);    
    
}

void CursoAlumno::operator =(const class CursoAlumno &orig){
    // De CursoAlumno
    codcur = nullptr;
    char oricodcur[10]; orig.GetCodcur(oricodcur);
    this->SetCodcur(oricodcur);
    this->SetCiclo(orig.GetCiclo());
    this->SetCodigo(orig.GetCodigo());
    this->SetNota(orig.GetNota());
    this->SetCreditos(orig.GetCreditos());
    this->SetVez(orig.GetVez());   
}

void CursoAlumno::imprime(ofstream&arch){
    
    arch<<left<<setw(12)<<codigo<<setw(10)<<codcur<<setw(10)<<ciclo<<
            right<<setw(5)<<nota<<setw(8)<<vez<<setw(10)<<creditos;    
}

bool CursoAlumno::operator<(const class CursoAlumno &other){
    
    if(codigo != other.codigo){
        return codigo < other.codigo;
    }else{
        if(strcmp(codcur,other.codcur)!=0){
            return strcmp(codcur,other.codcur);
        }else{
            return ciclo < other.ciclo;
        }        
    }
    
}