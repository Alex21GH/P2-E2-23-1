/* 
 * File:   Primera.h
 * Author: Alexis
 *
 * Created on 13 de noviembre de 2023, 03:07 PM
 */

#ifndef PRIMERA_H
#define PRIMERA_H

#include "CursoAlumno.h"

class Primera : public CursoAlumno{
private:
    char*codacceso;
public:
    Primera();
    Primera(const Primera& orig);
    virtual ~Primera();
    void SetCodacceso(char* );
    void GetCodacceso(char* ) const;

    void leerPrimera(ifstream &arch);
    void setearCOdigoAcceso();
    void imprime(ofstream&);
    
//    void operator=(const class Primera &orig);
};

#endif /* PRIMERA_H */

