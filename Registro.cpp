/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Registro.cpp
 * Author: Alexis
 * 
 * Created on 13 de noviembre de 2023, 03:15 PM
 */

#include <algorithm>

#include "Registro.h"

void Registro::carga(){
    ifstream arch("registronotas.csv",ios::in);
    if(!arch){
        cout<<"ERROR: No se pudo abrir el archivo registronotas.csv"<<endl;
        exit(1);
    }
    
    class Nota nota;
//    Nota tmpnota;
    while(true){
        nota.leerPrimera(arch);
        if(arch.eof()) break;
        vregistro.push_back(nota);
//        tmpnota = nota;
    }
}

void Registro::procesa(){
    // Ordenando vector
    sort(vregistro.begin(),vregistro.end());
//    if (vregistro[0] < vregistro[1]){
//        cout<<"1 < 2"<<endl;
//    }else
//        cout<<"1 > 2"<<endl;
    
}

void Registro::muestra(){
    ofstream arch("Reporte.txt",ios::out);
    if(!arch){
        cout<<"ERROR: No se pudo abrir el archivo Reporte.txt"<<endl;
        exit(1);
    }
    arch<<setprecision(2)<<fixed;
    arch<<right<<setw(50)<<"REGISTRO DE NOTAS"<<endl;
    println(arch,'=');
    arch<<left<<setw(12)<<"Codigo"<<setw(10)<<"Curso"<<setw(10)<<"Ciclo"<<
            right<<setw(5)<<"Nota"<<setw(8)<<" Vez"<<setw(10)<<"Creditos"<<
            "    Codigo de Acceso"<<endl;
    println(arch,'=');
    for(int i=0; i<vregistro.size();i++)
        vregistro[i].imprimirNota(arch);
}

void Registro::println(ofstream&arch, char c){
    arch<<setw(100)<<setfill(c)<<' ' <<setfill(' ')<<endl;
}