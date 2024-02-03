#pragma once
#include "Arma.h"
class Yesca : public Arma {
protected:
   
public:
    Yesca();
 
    ~Yesca();
    string getElemento() const;
    void setElemento(string elemento);
    virtual string toString();
};


