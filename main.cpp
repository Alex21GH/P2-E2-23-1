/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alexis
 *
 * Created on 13 de noviembre de 2023, 02:49 PM
 */

#include "Registro.h"
using namespace std;
/*
void f(){
    int a = 0;
    static int b = 0;
    a++;
    b++;
}*/

int main(int argc, char** argv) {
    Registro reg;
    int a=9;
    
    reg.carga();
    reg.procesa();
    reg.muestra();

    return 0;
    
    
}

